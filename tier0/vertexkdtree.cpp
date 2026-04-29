
//
// tier0/vertexkdtree.cpp
//
//	referenced by: libtier0.so
//
//	functions: 9
//

// <005151DD> tier0/vertexkdtree.cpp:7
// variables: 6
// function calls: 60
void CVertexKDTree::FindMidpointIndex(int nStart, int nCount, int nAxis, float flSplit)
{
	int nMid; // 10
	int nEnd; // 11
	{
		int i; // 12
		{
			const float* pSwap; // 16
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 16
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 17
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 17
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 18
		}
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<float const::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<float const::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<float const::operator[](
				int i);  // 588
		CUtlVectorBase<float const::operator[](
				int i);  // 14
	}
	{
		int i; // 22
		{
			const float* pSwap; // 26
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 26
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 27
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 27
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 28
		}
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<float const::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<float const::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<float const::operator[](
				int i);  // 588
		CUtlVectorBase<float const::operator[](
				int i);  // 24
	}
} /* size: 0, variables: 2 */

// <00514AFF> tier0/vertexkdtree.cpp:36
// variables: 6
// function calls: 26
void CVertexKDTree::FindVertsInBox(CUtlVectorFixedGrowable<float const*, 64>& list, const Vector& mins, const Vector& maxs, int nStartNode)
{
	const CVertexKDNode& node; // 38
	{
		int nVertCount; // 41
		int nVertStart; // 42
		{
			int i; // 44
			{
				const float* pVert; // 46
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<float const::IsIdxValid(
						int i);  // 199
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 200
				CUtlBlockMemory<float const::MinorIndex(
						int i);  // 201
				{
				}
				CUtlBlockMemory<float const::operator[](
						int i);  // 595
				CUtlVectorBase<float const::operator[](
						int i);  // 46
				CUtlMemory<float const::NumAllocated(); // 1196
				CUtlMemory<float const::Base(); // 112
				CUtlVectorBase<float const::Base(); // 368
				CUtlVectorBase<float const::ResetDbgInfo(); // 824
				CUtlMemory<float const::IsGrowable(); // 823
				CUtlMemory<float const::IsExternallyAllocated(); // 859
				CUtlMemory<float const::IsExternallyAllocated(); // 861
				CUtlMemory<float const::Grow(
					int num);  // 806
				CUtlVectorBase<float const::GrowMemory(
						int num);  // 1198
				CUtlMemory<float const::operator[](
						int i);  // 602
				CUtlVectorBase<float const::Element(
					int i);  // 1201
				CopyConstruct<float const*>(const float ** pMemory,
								const float* const& src);  // 1201
				CUtlVectorBase<float const::AddToTail(
						const float* const& src);  // 50
			}
		}
		CVertexKDNode::GetLeafVertCount(); // 41
		CVertexKDNode::GetLeafVertStart(); // 42
	}
	{
		int nAxis; // 57
		Vector::operator[](
				int i);  // 58
		Vector::operator[](
				int i);  // 62
	}
	CUtlMemory<CVertexKDNode, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
			int i);  // 38
	CVertexKDNode::IsLeaf(); // 39
} /* size: 0, variables: 1, inline expansions: 3 (54 bytes) */

// <00514438> tier0/vertexkdtree.cpp:69
// variables: 6
// function calls: 26
void CVertexKDTree::FindVertsInBox(CUtlVectorFixed<float const*, 64>& list, const Vector& mins, const Vector& maxs, int nStartNode)
{
	const CVertexKDNode& node; // 74
	{
		int nVertCount; // 77
		int nVertStart; // 78
		{
			int i; // 80
			{
				const float* pVert; // 82
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<float const::IsIdxValid(
						int i);  // 199
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 200
				CUtlBlockMemory<float const::MinorIndex(
						int i);  // 201
				{
				}
				CUtlBlockMemory<float const::operator[](
						int i);  // 595
				CUtlVectorBase<float const::operator[](
						int i);  // 82
				AlignedByteArrayExplicit_t<64, float const::Base(); // 268
				CUtlMemoryFixed<float const::Base(); // 112
				CUtlVectorBase<float const::Base(); // 368
				CUtlVectorBase<float const::ResetDbgInfo(); // 824
				CUtlVectorBase<float const::GrowMemory(
						int num);  // 1198
				AlignedByteArrayExplicit_t<64, float const::Base(); // 268
				CUtlMemoryFixed<float const::Base(); // 272
				CUtlMemoryFixed<float const::operator[](
						int i);  // 602
				CUtlVectorBase<float const::Element(
					int i);  // 1201
				CopyConstruct<float const*>(const float ** pMemory,
								const float* const& src);  // 1201
				CUtlVectorBase<float const::AddToTail(
						const float* const& src);  // 86
				CUtlVectorBase<float const::Count(); // 87
			}
		}
		CVertexKDNode::GetLeafVertCount(); // 77
		CVertexKDNode::GetLeafVertStart(); // 78
	}
	{
		int nAxis; // 95
		Vector::operator[](
				int i);  // 96
		Vector::operator[](
				int i);  // 100
	}
	CUtlVectorBase<float const::Count(); // 71
	CUtlMemory<CVertexKDNode, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
			int i);  // 74
	CVertexKDNode::IsLeaf(); // 75
} /* size: 0, variables: 1, inline expansions: 4 (28 bytes) */

// <00513CB0> tier0/vertexkdtree.cpp:107
// variables: 6
// function calls: 27
void CVertexKDTree::ForEachInBox(const Vector& mins, const Vector& maxs, function<void(float const*)> f, int nStartNode)
{
	const CVertexKDNode& node; // 109
	{
		int nVertCount; // 112
		int nVertStart; // 113
		{
			int i; // 115
			{
				const float* pVert; // 117
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<float const::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<float const::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<float const::operator[](
						int i);  // 588
				CUtlVectorBase<float const::operator[](
						int i);  // 117
				_Function_base::_M_empty(); // 591
				function<void(float const::operator(
						const float* __args#0);  // 121
			}
		}
		CVertexKDNode::GetLeafVertCount(); // 112
		CVertexKDNode::GetLeafVertStart(); // 113
	}
	{
		int nAxis; // 128
		Vector::operator[](
				int i);  // 129
		Vector::operator[](
				int i);  // 133
		_Function_base::_M_empty(); // 576
		function<void(float const::operator bool()>* this); // 391
		_Function_base::_Function_base(); // 389
		function<void(float const::function(
			const function<void(float const*)>& __x);  // 131
		_Function_base::~_Function_base(); // 336
		function<void(float const::~function()>* this); // 131
		_Function_base::_M_empty(); // 576
		function<void(float const::operator bool()>* this); // 391
		_Function_base::_Function_base(); // 389
		function<void(float const::function(
			const function<void(float const*)>& __x);  // 135
		_Function_base::~_Function_base(); // 336
		function<void(float const::~function()>* this); // 135
	}
	CUtlMemory<CVertexKDNode, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
			int i);  // 109
	CVertexKDNode::IsLeaf(); // 110
} /* size: 0, variables: 1, inline expansions: 3 (25 bytes) */

// <00513456> tier0/vertexkdtree.cpp:140
// variables: 10
// function calls: 30
void CVertexKDTree::ForEachInSphere(const Vector& vCenter, float flRadius, function<void(float const*)> f, int nStartNode)
{
	const CVertexKDNode& node; // 142
	{
		int nVertCount; // 145
		int nVertStart; // 146
		float flRadiusSquared; // 147
		{
			int i; // 150
			{
				const float* pVert; // 152
				float flX; // 154
				float flY; // 155
				float flZ; // 156
				_Function_base::_M_empty(); // 591
				function<void(float const::operator(
						const float* __args#0);  // 161
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<float const::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<float const::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<float const::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<float const::operator[](
						int i);  // 588
				CUtlVectorBase<float const::operator[](
						int i);  // 152
				Vector::operator[](
						int i);  // 154
				Vector::operator[](
						int i);  // 155
				Vector::operator[](
						int i);  // 156
			}
		}
		CVertexKDNode::GetLeafVertCount(); // 145
		CVertexKDNode::GetLeafVertStart(); // 146
	}
	{
		int nAxis; // 168
		Vector::operator[](
				int i);  // 169
		Vector::operator[](
				int i);  // 173
		_Function_base::_M_empty(); // 576
		function<void(float const::operator bool()>* this); // 391
		_Function_base::_Function_base(); // 389
		function<void(float const::function(
			const function<void(float const*)>& __x);  // 171
		_Function_base::~_Function_base(); // 336
		function<void(float const::~function()>* this); // 171
		_Function_base::_M_empty(); // 576
		function<void(float const::operator bool()>* this); // 391
		_Function_base::_Function_base(); // 389
		function<void(float const::function(
			const function<void(float const*)>& __x);  // 175
		_Function_base::~_Function_base(); // 336
		function<void(float const::~function()>* this); // 175
	}
	CUtlMemory<CVertexKDNode, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
			int i);  // 142
	CVertexKDNode::IsLeaf(); // 143
} /* size: 0, variables: 1, inline expansions: 3 (26 bytes) */

// <00512884> tier0/vertexkdtree.cpp:180
// variables: 21
// function calls: 45
void CVertexKDTree::ComputeBounds(Vector* pMins, Vector* pMaxs, int nStart, int nCount)
{
	fltx4 minsSSE; // 183
	fltx4 maxsSSE; // 184
	{
		int i; // 186
		{
			fltx4 currentVertex; // 189
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<float const::IsIdxValid(
					int i);  // 191
			CUtlBlockMemory<float const::MajorIndex(
					int i);  // 192
			CUtlBlockMemory<float const::MinorIndex(
					int i);  // 193
			{
			}
			CUtlBlockMemory<float const::operator[](
					int i);  // 588
			CUtlVectorBase<float const::operator[](
					int i);  // 189
			{
				fltx4 x000; // 1010
				fltx4 y000; // 1011
				fltx4 z000; // 1012
				fltx4 x0y0; // 1013
				_mm_load_ss(const float* __P); // 1010
				_mm_load_ss(const float* __P); // 1011
				_mm_load_ss(const float* __P); // 1012
				_mm_movelh_ps(__m128 __A,
						__m128 __B);  // 1013
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1014
			}
			LoadUnaligned3SIMD<>(const void* pSIMD); // 189
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 192
			{
				fltx4 retVal; // 2228
				_mm_max_ps(__m128 __A,
						__m128 __B);  // 2229
			}
			MaxSIMD<(ESIMDLevel)20>(const fltx4& a,
						const fltx4& b); // 193
		}
	}
	CUtlBlockMemory<float const::MajorIndex(
			int i);  // 243
	CUtlBlockMemory<float const::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<float const::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<float const::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<float const::operator[](
			int i);  // 588
	CUtlVectorBase<float const::operator[](
			int i);  // 183
	CUtlBlockMemory<float const::IsIdxValid(
			int i);  // 191
	CUtlBlockMemory<float const::MajorIndex(
			int i);  // 192
	CUtlBlockMemory<float const::MinorIndex(
			int i);  // 193
	{
	}
	CUtlBlockMemory<float const::operator[](
			int i);  // 588
	CUtlVectorBase<float const::operator[](
			int i);  // 184
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 183
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 184
	SubFloat<(ESIMDLevel)20>(const fltx4& a,
				int idx); // 129
	ExtractFloat<2>(const fltx4& a); // 506
	ExtractFloat<2, (ESIMDLevel)20>(const fltx4& a); // 199
	SubFloat<(ESIMDLevel)20>(const fltx4& a,
				int idx); // 129
	ExtractFloat<2>(const fltx4& a); // 506
	ExtractFloat<2, (ESIMDLevel)20>(const fltx4& a); // 205
} /* size: 0, variables: 2, inline expansions: 19 (867 bytes) */

// <00512863> tier0/vertexkdtree.cpp:209
inline int GreatestAxis(const Vector& v)
{
} /* size: 0 */

// <00512023> tier0/vertexkdtree.cpp:218
// variables: 11
// function calls: 30
void CVertexKDTree::BuildNode(int nStart, int nCount)
{
	int nIndex; // 240
	{
		Vector mins; // 222
		Vector maxs; // 222
		int nAxis; // 224
		float flSplit; // 225
		int nSplit; // 226
		int nLeftCount; // 227
		int nRightCount; // 228
		{
			int nIndex; // 231
			int nLeft; // 232
			int nRight; // 233
			CUtlMemory<CVertexKDNode, int>::NumAllocated(); // 1143
			CUtlMemory<CVertexKDNode, int>::Base(); // 112
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::Base(); // 368
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::AddToTail(); // 231
			CUtlMemory<CVertexKDNode, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
					int i);  // 234
			CVertexKDNode::InitAsSplit(
					float flSplit,
					int nAxis,
					int nCount);  // 234
			CUtlMemory<CVertexKDNode, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
					int i);  // 235
			CUtlMemory<CVertexKDNode, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
					int i);  // 236
		}
		Vector::Vector(); // 222
		Vector::Vector(); // 222
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 224
		GreatestAxis(const Vector& v); // 224
		Vector::operator[](
				int i);  // 225
		Vector::operator[](
				int i);  // 225
	}
	CVertexKDNode::InitAsLeaf(
			int nStart,
			int nCount);  // 241
	CUtlMemory<CVertexKDNode, int>::NumAllocated(); // 1143
	CUtlMemory<CVertexKDNode, int>::Base(); // 112
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::Base(); // 368
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::AddToTail(); // 240
	CUtlMemory<CVertexKDNode, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::operator[](
			int i);  // 241
} /* size: 568, variables: 1, inline expansions: 9 (179 bytes) */

// <00511A33> tier0/vertexkdtree.cpp:245
// variables: 2
// function calls: 23
void CVertexKDTree::BuildMidpoint(const float* pVerts, int nVertexCount, int nVertexStrideFloats)
{
	{
		int i; // 249
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<float const::IsIdxValid(
				int i);  // 191
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 192
		CUtlBlockMemory<float const::MinorIndex(
				int i);  // 193
		{
		}
		CUtlBlockMemory<float const::operator[](
				int i);  // 588
		CUtlVectorBase<float const::operator[](
				int i);  // 251
	}
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::RemoveAll(); // 247
	CUtlBlockMemory<float const::NumElementsInBlock(); // 227
	CUtlBlockMemory<float const::NumAllocated(); // 782
	CUtlBlockMemory<float const::Grow(
		int num);  // 247
	CUtlBlockMemory<float const::Grow(
		int num);  // 806
	CUtlVectorBase<float const::ResetDbgInfo(); // 824
	CUtlVectorBase<float const::GrowMemory(
			int num);  // 784
	CUtlVectorBase<float const::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float const::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float const::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float const::AddMultipleToTail(
				int num);  // 1319
	{
		int i; // 1696
		CUtlBlockMemory<float const::MajorIndex(
				int i);  // 243
		CUtlBlockMemory<float const::IsIdxValid(
				int i);  // 191
		{
		}
		CUtlBlockMemory<float const::operator[](
				int i);  // 602
		CUtlVectorBase<float const::Element(
			int i);  // 1697
	}
	CUtlVectorBase<float const::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<float const::SetCount(
		int count);  // 248
} /* size: 0, inline expansions: 13 (948 bytes) */

