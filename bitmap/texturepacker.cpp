
//
// bitmap/texturepacker.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 13
//

// <00CA574D> bitmap/texturepacker.cpp:12
// function calls: 8
void CTexturePacker::CTexturePacker(int texWidth, int texHeight, int pixelGap)
{
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 144
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::ConstructList(); // 146
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::ResetDbgInfo(); // 147
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::CUtlNTree(
			int growSize,
			int initSize);  // 12
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 191
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
			int i);  // 40
	CTexturePacker::Clear(); // 18
} /* size: 129, inline expansions: 8 (134 bytes) */

// <00CA570D> bitmap/texturepacker.cpp:12
void CTexturePacker::CTexturePacker(int texWidth, int texHeight, int pixelGap)
{
} /* size: 0 */

// <00CA543B> bitmap/texturepacker.cpp:24
// variables: 4
// function calls: 12
void CTexturePacker::~CTexturePacker()
{
	{
		int i; // 395
		{
			Node_t& node; // 397
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 115
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
					int i);  // 397
		}
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::RemoveAll(); // 27
	{
		int i; // 395
		{
			Node_t& node; // 397
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 115
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
					int i);  // 397
		}
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::RemoveAll(); // 161
	ValidateAlignment<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t>(void); // 508
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::Purge(); // 903
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::Purge(); // 510
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::~CUtlMemory(); // 162
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::~CUtlNTree(); // 28
} /* size: 297, inline expansions: 8 (483 bytes) */

// <00CA541F> bitmap/texturepacker.cpp:24
void CTexturePacker::~CTexturePacker()
{
} /* size: 0 */

// <00CA5C6A> bitmap/texturepacker.cpp:33
// variables: 4
// function calls: 5
void CTexturePacker::Clear()
{
	int rootIndex; // 39
	TreeEntry_t& topNode; // 40
	{
		int i; // 395
		{
			Node_t& node; // 397
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 115
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
					int i);  // 397
		}
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::RemoveAll(); // 36
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 191
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
			int i);  // 40
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <00CA53EB> bitmap/texturepacker.cpp:33
// variables: 2
void CTexturePacker::Clear()
{
	int rootIndex; // 39
	TreeEntry_t& topNode; // 40
} /* size: 0, variables: 2 */

// <00CA50FB> bitmap/texturepacker.cpp:52
// variable: 1
// function calls: 12
void CTexturePacker::IsLeaf(int nodeIndex)
{
	int leftChildIndex; // 54
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 229
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 230
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
			int i);  // 54
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 243
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 244
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::NextSibling(
			int i);  // 59
} /* size: 0, variables: 1, inline expansions: 12 (449 bytes) */

// <00CA5AD0> bitmap/texturepacker.cpp:70
// variable: 1
// function calls: 6
void CTexturePacker::IsLeftChild(int nodeIndexParent, int nodeIndexChild)
{
	int leftChildIndex; // 72
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 229
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 230
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
			int i);  // 72
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <00CA50BB> bitmap/texturepacker.cpp:70
// variable: 1
void CTexturePacker::IsLeftChild(int nodeIndexParent, int nodeIndexChild)
{
	int leftChildIndex; // 72
} /* size: 0, variables: 1 */

// <00CA4ED6> bitmap/texturepacker.cpp:86
// function calls: 7
void CTexturePacker::IsRightChild(int nodeIndexParent, int nodeIndexChild)
{
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 229
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 230
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
			int i);  // 72
	CTexturePacker::IsLeftChild(
			int nodeIndexParent,
			int nodeIndexChild);  // 88
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00CA43A2> bitmap/texturepacker.cpp:94
// variables: 14
// function calls: 40
void CTexturePacker::InsertRect(const Rect_t& texRect, int nodeIndex)
{
	{
		int leftChildIndex; // 105
		int newIndex; // 106
		int rightChildIndex; // 113
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 267
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
			int i);  // 229
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 230
		{
		}
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
				int i);  // 105
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsValidIndex(
				int i);  // 107
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 267
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
			int i);  // 243
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 244
		{
		}
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::NextSibling(
				int i);  // 113
	}
	{
		int cacheSlotWidth; // 123
		int cacheSlotHeight; // 124
		int dw; // 144
		int dh; // 145
		int leftChildIndex; // 147
		{
			TreeEntry_t& leftChild; // 152
			int rightChildIndex; // 159
			TreeEntry_t& rightChild; // 161
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 152
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 153
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 154
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 161
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 162
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 163
		}
		{
			TreeEntry_t& leftChild; // 175
			int rightChildIndex; // 182
			TreeEntry_t& rightChild; // 184
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 175
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 176
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 177
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 184
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 185
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 186
		}
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 191
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
				int i);  // 118
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::Root(); // 98
} /* size: 0, inline expansions: 1 (4 bytes) */

// <00CA3A75> bitmap/texturepacker.cpp:203
// variables: 3
// function calls: 33
void CTexturePacker::RemoveRect(int nodeIndex)
{
	{
		int parentIndex; // 215
		{
			int peerIndex; // 221
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 116
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
					int i);  // 267
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
				int i);  // 243
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 116
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
					int i);  // 244
			{
			}
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::NextSibling(
					int i);  // 221
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 222
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::Remove(
				int elem);  // 225
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::Remove(
				int elem);  // 226
		}
		{
			int peerIndex; // 233
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
				int i);  // 229
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 116
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
					int i);  // 230
			{
			}
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
					int i);  // 233
			CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
					int i);  // 191
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
					int i);  // 236
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::Remove(
				int elem);  // 239
			CUtlNTree<CTexturePacker::TreeEntry_t, int>::Remove(
				int elem);  // 240
		}
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 267
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
			int i);  // 250
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 251
		{
		}
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::Parent(
			int i);  // 215
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 267
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
			int i);  // 229
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 116
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 230
		{
		}
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
				int i);  // 218
	}
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 205
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00CA3655> bitmap/texturepacker.cpp:253
// variables: 6
// function calls: 14
void CTexturePacker::GetInUseBoundingRect(Rect_t* pRect, int nodeIndex)
{
	TreeEntry_t& node; // 265
	bool bHaveRect; // 272
	int nextIndex; // 273
	{
		Rect_t rcT; // 276
		{
			int dx; // 282
			int dy; // 293
		}
	}
	Rect_t::Clear(); // 255
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 191
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](
			int i);  // 265
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 229
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 230
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(
			int i);  // 273
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 243
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 244
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::NextSibling(
			int i);  // 274
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::Root(); // 258
} /* size: 0, variables: 3, inline expansions: 14 (0 bytes) */

