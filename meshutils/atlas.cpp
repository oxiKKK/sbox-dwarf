
//
// meshutils/atlas.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 2
//

// <05A9C332> meshutils/atlas.cpp:9
// member functions: 6
// member variables: 5
// class size: 48
class CPackNode {
	CPackNode * m_child[2]; /* 0 16 */
	Rect_t m_rect; /* 16 16 */
	AtlasChart_t * m_pChart; /* 32 8 */
	float m_flTotalW; /* 40 4 */
	float m_flTotalH; /* 44 4 */
	/* meshutils/atlas.cpp:20 */
	void CPackNode(CPackNode* );
	/* meshutils/atlas.cpp:27 */
	void Init(CPackNode* , const Rect_t& , float, float);
	/* meshutils/atlas.cpp:34 */
	CPackNode* InsertChart(CPackNode* , CUtlBlockVector<CPackNode, int>& , AtlasChart_t* );
	void CPackNode(class CPackNode *); /* linkage=_ZN9CPackNodeC4Ev */
	void Init(class CPackNode *, const class Rect_t  &, float, float); /* linkage=_ZN9CPackNode4InitERK6Rect_tff */
	class CPackNode * InsertChart(class CPackNode *, class CUtlBlockVector<CPackNode, int> &, class AtlasChart_t *); /* linkage=_ZN9CPackNode11InsertChartER15CUtlBlockVectorIS_iEP12AtlasChart_t */
};

// <05AA1762> meshutils/atlas.cpp:20
void CPackNode::CPackNode()
{
} /* size: 0 */

// <05AA1749> meshutils/atlas.cpp:20
inline void CPackNode::CPackNode()
{
} /* size: 0 */

// <05AA170C> meshutils/atlas.cpp:27
inline void CPackNode::Init(const Rect_t& rect, float flTotalW, float flTotalH)
{
} /* size: 0 */

// <05A9D8E9> meshutils/atlas.cpp:37
// member functions: 8
// member variables: 4
// class size: 48
class CAtlasPacker {
private:
	int m_nWidth; /* 0 4 */
	int m_nHeight; /* 4 4 */
	CPackNode * m_pRootNode; /* 8 8 */
	CUtlBlockVector<CPackNode, int> m_Nodes; /* 16 32 */
	/* meshutils/atlas.cpp:47 */
	void CAtlasPacker(CAtlasPacker* );
	/* meshutils/atlas.cpp:48 */
	void ~CAtlasPacker(CAtlasPacker* );
	/* meshutils/atlas.cpp:50 */
	void Init(CAtlasPacker* , int, int);
	/* meshutils/atlas.cpp:52 */
	bool InsertChart(CAtlasPacker* , AtlasChart_t* );
	void CAtlasPacker(class CAtlasPacker *); /* linkage=_ZN12CAtlasPackerC4Ev */
	void ~CAtlasPacker(class CAtlasPacker *); /* linkage=_ZN12CAtlasPackerD4Ev */
	/* <5aa1a00> meshutils/atlas.cpp:258 */
	void Init(class CAtlasPacker *, int, int); /* linkage=_ZN12CAtlasPacker4InitEii */
	/* <5aa1f46> meshutils/atlas.cpp:270 */
	bool InsertChart(class CAtlasPacker *, class AtlasChart_t *); /* linkage=_ZN12CAtlasPacker11InsertChartEP12AtlasChart_t */
};

// <05AA1637> meshutils/atlas.cpp:55
// variables: 2
// function calls: 2
bool SortAtlasCharts(AtlasChart_t& one, AtlasChart_t& two)
{
	int nSizeOne; // 57
	int nSizeTwo; // 58
	Max<float>(const float& val1,
			const float& val2);  // 57
	Max<float>(const float& val1,
			const float& val2);  // 58
} /* size: 40, variables: 2, inline expansions: 2 (13 bytes) */

// <05A9F826> meshutils/atlas.cpp:150
// variables: 9
// function calls: 46
void CPackNode::InsertChart(CUtlBlockVector<CPackNode, int>& nodeAllocator, AtlasChart_t* pChart)
{
	int texWidth; // 152
	int texHeight; // 153
	{
		CPackNode* pNewNode; // 159
	}
	{
		int width; // 175
		int height; // 176
		Rect_t rect0; // 200
		Rect_t rect1; // 200
		int dw; // 202
		int dh; // 203
		CUtlBlockMemory<CPackNode, int>::NumElementsInBlock(); // 227
		CUtlBlockMemory<CPackNode, int>::NumAllocated(); // 1143
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CPackNode, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CPackNode, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CPackNode, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::Element(
			int i);  // 1148
		CPackNode::CPackNode(); // 1479
		Construct<CPackNode>(CPackNode* pMemory); // 1148
		CUtlBlockMemory<CPackNode, int>::Grow(
			int num);  // 247
		CUtlBlockMemory<CPackNode, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::AddToTail(); // 232
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CPackNode, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CPackNode, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CPackNode, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::operator[](
				int i);  // 232
		CPackNode::Init(
			const Rect_t& rect,
			float flTotalW,
			float flTotalH);  // 233
		CUtlBlockMemory<CPackNode, int>::NumElementsInBlock(); // 227
		CUtlBlockMemory<CPackNode, int>::NumAllocated(); // 1143
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CPackNode, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CPackNode, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CPackNode, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::Element(
			int i);  // 1148
		CPackNode::CPackNode(); // 1479
		Construct<CPackNode>(CPackNode* pMemory); // 1148
		CUtlBlockMemory<CPackNode, int>::Grow(
			int num);  // 247
		CUtlBlockMemory<CPackNode, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::AddToTail(); // 234
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CPackNode, int>::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<CPackNode, int>::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<CPackNode, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::operator[](
				int i);  // 234
		CPackNode::Init(
			const Rect_t& rect,
			float flTotalW,
			float flTotalH);  // 235
	}
	ceil(float __x); // 152
	ceil(float __x); // 153
} /* size: 0, variables: 2, inline expansions: 2 (147 bytes) */

// <05A9F6B0> meshutils/atlas.cpp:245
// function calls: 4
void CAtlasPacker::CAtlasPacker()
{
	CUtlBlockMemory<CPackNode, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<CPackNode, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 245
} /* size: 0, inline expansions: 4 (0 bytes) */

// <05A9F695> meshutils/atlas.cpp:245
void CAtlasPacker::CAtlasPacker()
{
} /* size: 0 */

// <05A9F436> meshutils/atlas.cpp:253
// variables: 2
// function calls: 10
void CAtlasPacker::~CAtlasPacker()
{
	{
		int i; // 1721
		CUtlBlockMemory<CPackNode, int>::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<CPackNode, int>::IsIdxValid(
				int i);  // 191
		{
		}
		CUtlBlockMemory<CPackNode, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::Element(
			int i);  // 1723
	}
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<CPackNode, int>::Purge(); // 354
	CUtlBlockMemory<CPackNode, int>::Purge(); // 1799
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::Purge(); // 560
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::~CUtlVectorBase(); // 10
	CUtlBlockVector<CPackNode, int>::~CUtlBlockVector(); // 256
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05A9F41B> meshutils/atlas.cpp:253
void CAtlasPacker::~CAtlasPacker()
{
} /* size: 0 */

// <05AA1A00> meshutils/atlas.cpp:258
// variable: 1
// function calls: 22
void CAtlasPacker::Init(int nWidth, int nHeight)
{
	Rect_t rect; // 263
	CUtlBlockMemory<CPackNode, int>::NumElementsInBlock(); // 227
	CUtlBlockMemory<CPackNode, int>::NumAllocated(); // 1143
	CUtlBlockMemory<CPackNode, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<CPackNode, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<CPackNode, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<CPackNode, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<CPackNode, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::Element(
		int i);  // 1148
	CPackNode::CPackNode(); // 1479
	Construct<CPackNode>(CPackNode* pMemory); // 1148
	CUtlBlockMemory<CPackNode, int>::Grow(
		int num);  // 247
	CUtlBlockMemory<CPackNode, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::AddToTail(); // 266
	CUtlBlockMemory<CPackNode, int>::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<CPackNode, int>::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<CPackNode, int>::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<CPackNode, int>::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<CPackNode, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPackNode, CUtlBlockMemory<CPackNode, int> >::operator[](
			int i);  // 266
	CPackNode::Init(
		const Rect_t& rect,
		float flTotalW,
		float flTotalH);  // 267
} /* size: 0, variables: 1, inline expansions: 22 (0 bytes) */

// <05A9F3D8> meshutils/atlas.cpp:258
// variable: 1
void CAtlasPacker::Init(int nWidth, int nHeight)
{
	Rect_t rect; // 263
} /* size: 0, variables: 1 */

// <05AA1F46> meshutils/atlas.cpp:270
// variable: 1
void CAtlasPacker::InsertChart(AtlasChart_t* pChart)
{
	CPackNode* pNode; // 275
} /* size: 0, variables: 1 */

