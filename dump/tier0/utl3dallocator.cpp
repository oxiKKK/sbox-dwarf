
//
// tier0/utl3dallocator.cpp
//
//	referenced by: libtier0.so
//
//	functions: 16
//

// <005356AC> tier0/utl3dallocator.cpp:8
// variables: 3
// function calls: 5
void CUtl3DAllocator::Reset(int nWidth, int nHeight, int nDepth)
{
	FreeRegion_t* pNew; // 14
	{
		int i; // 10
		{
			FreeRegion_t* tmp; // 1018
		}
		CUtlIntrusiveList<CUtl3DAllocator::FreeRegion_t>::Purge(); // 12
	}
	Rect3D_t::Size(); // 26
	{
	}
	FreeRegion_t::GetBucket(); // 20
	AddToDHead<CUtl3DAllocator::FreeRegion_t>(FreeRegion_t *& head,
							FreeRegion_t* which);  // 1186
	CUtlIntrusiveDList<CUtl3DAllocator::FreeRegion_t>::AddToHead(
			FreeRegion_t* node);  // 20
} /* size: 0, variables: 1, inline expansions: 4 (115 bytes) */

// <00535CB4> tier0/utl3dallocator.cpp:24
// variable: 1
// function call: 1
void FreeRegion_t::GetBucket()
{
	int nSize; // 26
	Rect3D_t::Size(); // 26
	{
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00535646> tier0/utl3dallocator.cpp:24
// variables: 3
void FreeRegion_t::GetBucket()
{
	int nSize; // 26
	const char   __FUNCTION__; // 28396
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 27
	}
} /* size: 0, variables: 2 */

// <00535100> tier0/utl3dallocator.cpp:32
// variables: 2
// function calls: 14
void CUtl3DAllocator::TakeFreeSpaceFromNode(int nWidth, int nHeight, int nDepth, Rect3D_t* pResult, FreeRegion_t* pNode, int nNodeBucket)
{
	{
		FreeRegion_t* pNewNode; // 56
		Rect3D_t::Size(); // 26
		{
		}
		FreeRegion_t::GetBucket(); // 61
		AddToDHead<CUtl3DAllocator::FreeRegion_t>(FreeRegion_t *& head,
								FreeRegion_t* which);  // 1186
		CUtlIntrusiveDList<CUtl3DAllocator::FreeRegion_t>::AddToHead(
				FreeRegion_t* node);  // 61
	}
	{
		FreeRegion_t* pNewNode; // 66
		Rect3D_t::Size(); // 26
		{
		}
		FreeRegion_t::GetBucket(); // 72
		AddToDHead<CUtl3DAllocator::FreeRegion_t>(FreeRegion_t *& head,
								FreeRegion_t* which);  // 1186
		CUtlIntrusiveDList<CUtl3DAllocator::FreeRegion_t>::AddToHead(
				FreeRegion_t* node);  // 72
	}
	{
	}
	{
	}
	{
	}
	RemoveFromDList<CUtl3DAllocator::FreeRegion_t>(FreeRegion_t *& head,
							FreeRegion_t* which);  // 1195
	CUtlIntrusiveDList<CUtl3DAllocator::FreeRegion_t>::RemoveNode(
			FreeRegion_t* which);  // 40
	Rect3D_t::Size(); // 26
	{
	}
	FreeRegion_t::GetBucket(); // 79
	AddToDHead<CUtl3DAllocator::FreeRegion_t>(FreeRegion_t *& head,
							FreeRegion_t* which);  // 1186
	CUtlIntrusiveDList<CUtl3DAllocator::FreeRegion_t>::AddToHead(
			FreeRegion_t* node);  // 79
} /* size: 0, inline expansions: 6 (649 bytes) */

// <00534EB0> tier0/utl3dallocator.cpp:87
// variables: 10
// function calls: 2
void CUtl3DAllocator::Allocate3D(int nWidth, int nHeight, int nDepth, bool bTooSmallIsOK, Rect3D_t* pResult)
{
	int nStartBucket; // 89
	int nChosenBucket; // 91
	FreeRegion_t* pChosenNode; // 92
	int nSizeError; // 93
	{
		int b; // 95
		{
			FreeRegion_t* i; // 97
			{
				int nSizeDifferential; // 102
			}
			CUtlIntrusiveList<CUtl3DAllocator::FreeRegion_t>::Head(); // 97
		}
	}
	{
		int b; // 123
		{
			FreeRegion_t* i; // 125
			{
				int nSizeDifferential; // 127
			}
			CUtlIntrusiveList<CUtl3DAllocator::FreeRegion_t>::Head(); // 125
		}
	}
} /* size: 458, variables: 4 */

// <0053496A> tier0/utl3dallocator.cpp:144
// function calls: 21
void CUtl3DAllocator2::CUtl3DAllocator2()
{
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::CUtlMemory(
			Node3D_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CUtl3DAllocator2::Node3D_t, int>::CUtlMemoryFixedGrowable_Base(
					Node3D_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, CUtl3DAllocator2::Node3D_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CUtl3DAllocator2::Node3D_t, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 144
	{
	}
	AlignedByteArrayExplicit_t<64, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, int>::AlignedByteArray_t(); // 228
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 144
	IntVector3D::IntVector3D(); // 144
} /* size: 199, inline expansions: 21 (513 bytes) */

// <0053494E> tier0/utl3dallocator.cpp:144
void CUtl3DAllocator2::CUtl3DAllocator2()
{
} /* size: 0 */

// <005342FB> tier0/utl3dallocator.cpp:149
// variable: 1
// function calls: 31
void CUtl3DAllocator2::Reset(int nWidth, int nHeight, int nDepth)
{
	Node3D_t& node; // 157
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::ConvertToExternalMemory(
				Node3D_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CUtl3DAllocator2::Node3D_t, int>::Purge_FixedGrowable(
				Node3D_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CUtl3DAllocator2::Node3D_t, int>::Purge_FixedGrowable(
				Node3D_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<64, CUtl3DAllocator2::Node3D_t, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::Purge(); // 152
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<64, int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<int, 64, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::RemoveAll(); // 1798
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Purge(); // 153
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::NumAllocated(); // 1143
	IntVector3D::IntVector3D(); // 123
	Node3D_t::Node3D_t(); // 1479
	Construct<CUtl3DAllocator2::Node3D_t>(Node3D_t* pMemory); // 1148
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::Base(); // 112
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::Base(); // 368
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::AddToTail(); // 157
	IntVector3D::Init(
		int nX,
		int nY,
		int nZ);  // 156
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 157
	Node3D_t::MarkFree(); // 158
} /* size: 418, variables: 1, inline expansions: 31 (1485 bytes) */

// <00534061> tier0/utl3dallocator.cpp:161
// variables: 5
// function calls: 4
void CUtl3DAllocator2::Allocate3D(int nWidth, int nHeight, int nDepth, Rect3D_t* pResult)
{
	int nBestNode; // 163
	int nBestSizeDifference; // 164
	Rect3D_t bestRect; // 165
	IntVector3D size; // 167
	Rect3D_t rootRect; // 168
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 167
	Rect3D_t::Init(
		int nX,
		int nY,
		int nZ,
		int nWidth,
		int nHeight,
		int nDepth);  // 110
	Rect3D_t::Rect3D_t(
		int nX,
		int nY,
		int nZ,
		int nWidth,
		int nHeight,
		int nDepth);  // 168
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
			int i);  // 171
} /* size: 210, variables: 5, inline expansions: 4 (75 bytes) */

// <00533EF7> tier0/utl3dallocator.cpp:179
// function calls: 2
void CUtl3DAllocator2::Free3D(const Rect3D_t& rect)
{
	Rect3D_t::Init(
		int nX,
		int nY,
		int nZ,
		int nWidth,
		int nHeight,
		int nDepth);  // 110
	Rect3D_t::Rect3D_t(
		int nX,
		int nY,
		int nZ,
		int nWidth,
		int nHeight,
		int nDepth);  // 181
} /* size: 95, inline expansions: 2 (44 bytes) */

// <00533625> tier0/utl3dallocator.cpp:184
// variables: 12
// function calls: 24
void CUtl3DAllocator2::Allocate3D_R(Rect3D_t* pResult, const IntVector3D& size, int nNode, const Rect3D_t& nodeRect)
{
	const char   __FUNCTION__; // 32102
	{
		int nFirstOctantChild; // 207
		bool bNonDegenerate; // 211
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 209
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
		}
		CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
				int i);  // 207
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
				int i);  // 208
		CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
				int i);  // 209
		Node3D_t::IsFree(); // 209
		CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
				int i);  // 211
		CUtl3DAllocator2::ChildRect(
				Rect3D_t* pChildRect,
				const Rect3D_t& nodeRect,
				const IntVector3D& vSplitPoint,
				int nChild);  // 211
		CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
				int i);  // 216
		Node3D_t::MarkUsed(); // 216
	}
	{
		Rect3D_t childRect; // 226
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
		}
		{
			int i; // 227
			{
				bool bNonDegenerate; // 232
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
				}
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 229
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
						int i);  // 229
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 236
			}
		}
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
				int i);  // 224
	}
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 189
	Node3D_t::IsUsed(); // 189
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 199
	Node3D_t::MarkUsed(); // 199
} /* size: 0, variables: 1, inline expansions: 6 (43 bytes) */

// <00535DCF> tier0/utl3dallocator.cpp:245
// variables: 6
// function calls: 34
void CUtl3DAllocator2::Free3D_R(const Rect3D_t& rect, int nNode, const Rect3D_t& nodeRect)
{
	bool bAllChildrenFree; // 265
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
			int i);  // 247
	Rect3D_t::Intersects(
			const Rect3D_t& other);  // 140
	Rect3D_t::Intersects(
			const Rect3D_t& other);  // 249
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 252
	Node3D_t::IsFree(); // 252
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
			int i);  // 262
	{
		int i; // 266
		{
			int nChild; // 268
			{
				Rect3D_t childRect; // 271
				Node3D_t::IsFree(); // 275
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 275
			}
			CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
					int i);  // 269
			CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
					int i);  // 268
		}
	}
	{
		int i; // 282
		{
			int nChild; // 284
			CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
					int i);  // 284
			CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
					int i);  // 285
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::ResetDbgInfo(); // 824
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::AddToTail(
					const int& src);  // 287
		}
	}
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 290
	Node3D_t::MarkFree(); // 290
	Node3D_t::MarkFree(); // 257
	{
	}
	CUtl3DAllocator2::Free3D_R(
		const Rect3D_t& rect,
		int nNode,
		const Rect3D_t& nodeRect);  // 245
	{
	}
} /* size: 0, variables: 1, inline expansions: 12 (814 bytes) */

// <00533519> tier0/utl3dallocator.cpp:245
// variables: 9
void CUtl3DAllocator2::Free3D_R(const Rect3D_t& rect, int nNode, const Rect3D_t& nodeRect)
{
	const char   __FUNCTION__; // 29844
	bool bAllChildrenFree; // 265
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 247
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
	}
	{
		int i; // 266
		{
			int nChild; // 268
			{
				Rect3D_t childRect; // 271
			}
		}
	}
	{
		int i; // 282
		{
			int nChild; // 284
		}
	}
} /* size: 0, variables: 2 */

// <0053307D> tier0/utl3dallocator.cpp:295
// variables: 7
// function calls: 11
void CUtl3DAllocator2::FindBestNodeFittingRect_R(int& nBestNode, int& nBestSizeDifference, Rect3D_t& bestRect, const IntVector3D& size, int nNode, const Rect3D_t& nodeRect)
{
	const char   __FUNCTION__; // 29576
	{
		int nMyBestSizeDifference; // 306
		Min<int>(const int& val1,
			const int& val2);  // 307
		Min<int>(const int& val1,
			const int& val2);  // 308
	}
	{
		Rect3D_t childRect; // 323
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
		}
		{
			int i; // 324
			{
				bool bNonDegenerate; // 329
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
				}
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 326
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
						int i);  // 326
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 333
			}
		}
		CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
				int i);  // 321
	}
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 300
	Node3D_t::IsUsed(); // 300
} /* size: 0, variables: 1, inline expansions: 3 (29 bytes) */

// <005328E5> tier0/utl3dallocator.cpp:339
// variables: 8
// function calls: 27
void CUtl3DAllocator2::SplitNode(int nNode, const Rect3D_t& nodeRect, const IntVector3D& split)
{
	const char   __FUNCTION__; // 28396
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 342
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 343
	}
	{
		int i; // 346
		{
			Rect3D_t childRect; // 348
			bool bNonDegenerate; // 349
			{
				int nChild; // 353
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Count(); // 135
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::IsEmpty(); // 354
				CUtlMemory<int, int>::operator[](
						int i);  // 630
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Tail(); // 360
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::RemoveMultipleFromTail(
							int num);  // 361
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 364
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
						int i);  // 365
				Node3D_t::MarkFree(); // 365
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::NumAllocated(); // 1143
				IntVector3D::IntVector3D(); // 123
				Node3D_t::Node3D_t(); // 1479
				Construct<CUtl3DAllocator2::Node3D_t>(Node3D_t* pMemory); // 1148
				CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::Base(); // 112
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::Base(); // 368
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::AddToTail(); // 356
			}
			CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
					int i);  // 369
		}
	}
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::IsValidIndex(
			int i);  // 341
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 342
	Node3D_t::IsFree(); // 342
	CUtlMemory<CUtl3DAllocator2::Node3D_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtl3DAllocator2::Node3D_t, CUtlMemoryFixedGrowable<CUtl3DAllocator2::Node3D_t, 64, int> >::operator[](
			int i);  // 345
} /* size: 0, variables: 1, inline expansions: 6 (35 bytes) */

// <00535D49> tier0/utl3dallocator.cpp:375
// variables: 3
void CUtl3DAllocator2::ChildRect(Rect3D_t* pChildRect, const Rect3D_t& nodeRect, const IntVector3D& vSplitPoint, int nChild)
{
	int nXpos; // 377
	int nYpos; // 378
	int nZpos; // 379
} /* size: 137, variables: 3 */

