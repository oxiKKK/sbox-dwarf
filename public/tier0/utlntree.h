
//
// public/tier0/utlntree.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 21
//	class: 1
//

// <00528D1F> ../public/tier0/utlntree.h:27
// member functions: 41
// member variables: 6
// class size: 40
class CUtlNTree<CTexturePacker::TreeEntry_t, int> {
	/* ../public/tier0/utlntree.h:95 */
	struct Node_t {
		TreeEntry_t m_Element; /* 0 20 */
		int m_Parent; /* 20 4 */
		int m_FirstChild; /* 24 4 */
		int m_PrevSibling; /* 28 4 */
		int m_NextSibling; /* 32 4 */
	private:
		/* ../public/tier0/utlntree.h:105 */
		void Node_t(Node_t* , const Node_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlntree.h:143 */
	void CUtlNTree(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int);
	/* ../public/tier0/utlntree.h:151 */
	void CUtlNTree(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , void* , int);
	/* ../public/tier0/utlntree.h:159 */
	void ~CUtlNTree(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:177 */
	TreeEntry_t& Element(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:183 */
	const TreeEntry_t& Element(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:189 */
	TreeEntry_t& operator[](CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:195 */
	const TreeEntry_t& operator[](const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:275 */
	void EnsureCapacity(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:388 */
	void RemoveAll(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:286 */
	void Purge(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:340 */
	int Alloc(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:348 */
	void Free(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:368 */
	void FreeSubTree(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:421 */
	void SetRoot(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:481 */
	void LinkChildBefore(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int, int);
	/* ../public/tier0/utlntree.h:433 */
	void LinkChildAfter(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int, int);
	/* ../public/tier0/utlntree.h:525 */
	void Unlink(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:565 */
	int InsertChildBefore(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int);
	/* ../public/tier0/utlntree.h:574 */
	int InsertChildAfter(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int);
	/* ../public/tier0/utlntree.h:583 */
	int InsertChildBefore(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int, const TreeEntry_t& );
	/* ../public/tier0/utlntree.h:592 */
	int InsertChildAfter(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int, int, const TreeEntry_t& );
	/* ../public/tier0/utlntree.h:605 */
	void Remove(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:612 */
	void RemoveSubTree(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:75 */
	int InvalidIndex(void);
	/* ../public/tier0/utlntree.h:76 */
	size_t ElementSize(void);
	/* ../public/tier0/utlntree.h:205 */
	int Count(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:211 */
	int MaxElementIndex(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:221 */
	int Root(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:227 */
	int FirstChild(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:234 */
	int PrevSibling(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:241 */
	int NextSibling(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:248 */
	int Parent(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:259 */
	bool IsValidIndex(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:265 */
	bool IsInTree(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
protected:
	/* ../public/tier0/utlntree.h:165 */
	void ConstructList(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:300 */
	int AllocInternal(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:115 */
	Node_t& InternalNode(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:116 */
	const Node_t& InternalNode(const CUtlNTree<CTexturePacker::TreeEntry_t, int>* , int);
	/* ../public/tier0/utlntree.h:118 */
	void ResetDbgInfo(CUtlNTree<CTexturePacker::TreeEntry_t, int>* );
	/* ../public/tier0/utlntree.h:124 */
	void CUtlNTree(CUtlNTree<CTexturePacker::TreeEntry_t, int>* , const CUtlNTree<CTexturePacker::TreeEntry_t, int>& );
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int> m_Memory; /* 0 16 */
	int m_Root; /* 16 4 */
	int m_FirstFree; /* 20 4 */
	int m_ElementCount; /* 24 4 */
	int m_MaxElementIndex; /* 28 4 */
	Node_t * m_pElements; /* 32 8 */
};

// <00CA3566> ../public/tier0/utlntree.h:75
inline void InvalidIndex(void)
{
} /* size: 0 */

// <00CA2E05> ../public/tier0/utlntree.h:115
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(int i)
{
} /* size: 0 */

// <00CA2E28> ../public/tier0/utlntree.h:118
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::ResetDbgInfo()
{
} /* size: 0 */

// <00CA3611> ../public/tier0/utlntree.h:143
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::CUtlNTree(int growSize, int initSize)
{
} /* size: 0 */

// <00CA35C9> ../public/tier0/utlntree.h:159
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::~CUtlNTree()
{
} /* size: 0 */

// <00CA2E41> ../public/tier0/utlntree.h:165
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::ConstructList()
{
} /* size: 0 */

// <00CA2989> ../public/tier0/utlntree.h:177
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::Element(int i)
{
} /* size: 0 */

// <00CA3632> ../public/tier0/utlntree.h:189
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::operator[](int i)
{
} /* size: 0 */

// <00CA2FBB> ../public/tier0/utlntree.h:221
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::Root()
{
} /* size: 0 */

// <00CA3034> ../public/tier0/utlntree.h:227
// variables: 2
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::FirstChild(int i)
{
	const char   __FUNCTION__; // 28816
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 229
	}
} /* size: 0, variables: 1 */

// <00CA2FD4> ../public/tier0/utlntree.h:241
// variables: 2
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::NextSibling(int i)
{
	const char   __FUNCTION__; // 28720
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 243
	}
} /* size: 0, variables: 1 */

// <00CA2F28> ../public/tier0/utlntree.h:248
// variables: 2
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::Parent(int i)
{
	const char   __FUNCTION__; // 26712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
} /* size: 0, variables: 1 */

// <00CA2F97> ../public/tier0/utlntree.h:259
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsValidIndex(int i)
{
} /* size: 0 */

// <00CA2F73> ../public/tier0/utlntree.h:265
inline void CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(int i)
{
} /* size: 0 */

// <00CA29AC> ../public/tier0/utlntree.h:300
// variables: 5
// function calls: 12
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::AllocInternal()
{
	const char   __FUNCTION__; // 28121
	int elem; // 302
	Node_t& node; // 329
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
	{
		int* _pCrash; // 320
	}
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 326
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::NumAllocated(); // 308
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::Grow(
		int num);  // 310
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 320
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 329
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::Base(); // 120
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::ResetDbgInfo(); // 331
} /* size: 535, variables: 3, inline expansions: 12 (404 bytes) */

// <00CA215F> ../public/tier0/utlntree.h:348
// variables: 4
// function calls: 12
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::Free(int elem)
{
	const char   __FUNCTION__; // 25914
	Node_t& node; // 356
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 350
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 354
	}
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 350
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
			int i);  // 354
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 356
	Destruct<CTexturePacker::TreeEntry_t>(TreeEntry_t* pMemory); // 357
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <00CA356D> ../public/tier0/utlntree.h:388
// variables: 3
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::RemoveAll()
{
	int prev; // 394
	{
		int i; // 395
		{
			Node_t& node; // 397
		}
	}
} /* size: 0, variables: 1 */

// <00CA287F> ../public/tier0/utlntree.h:433
// variables: 7
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::LinkChildAfter(int parent, int after, int elem)
{
	const char   __FUNCTION__; // 26962
	Node_t& newElem; // 440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 435
	}
	{
		Node_t& prevSiblingNode; // 445
	}
	{
		Node_t& parentNode; // 453
	}
	{
		Node_t& rootNode; // 462
	}
	{
		Node_t& nextSiblingNode; // 471
	}
} /* size: 0, variables: 2 */

// <00CA253E> ../public/tier0/utlntree.h:525
// variables: 3
// function calls: 11
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::Unlink(int elem)
{
	const char   __FUNCTION__; // 26712
	Node_t* pOldNode; // 529
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 527
	}
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 527
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 529
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 535
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 553
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 541
} /* size: 215, variables: 2, inline expansions: 11 (89 bytes) */

// <00CA3094> ../public/tier0/utlntree.h:574
// variables: 5
// function calls: 14
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::InsertChildAfter(int parent, int after)
{
	int elem; // 576
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 116
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 267
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::IsInTree(
		int i);  // 435
	CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
			int i);  // 115
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
			int i);  // 440
	{
		Node_t& prevSiblingNode; // 445
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 115
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 445
	}
	{
		Node_t& parentNode; // 453
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 115
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 453
	}
	{
		Node_t& rootNode; // 462
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 115
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 462
	}
	{
		Node_t& nextSiblingNode; // 471
		CUtlMemory<CUtlNTree<CTexturePacker::TreeEntry_t, int>::Node_t, int>::operator[](
				int i);  // 115
		CUtlNTree<CTexturePacker::TreeEntry_t, int>::InternalNode(
				int i);  // 471
	}
	{
	}
	CUtlNTree<CTexturePacker::TreeEntry_t, int>::LinkChildAfter(
			int parent,
			int after,
			int elem);  // 578
} /* size: 283, variables: 1, inline expansions: 6 (304 bytes) */

// <00CA2F02> ../public/tier0/utlntree.h:605
void CUtlNTree<CTexturePacker::TreeEntry_t, int>::Remove(int elem)
{
} /* size: 0 */

