
//
// bonesetup/bone_retarget.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 37
//	struct: 1
//

// <026B0468> bonesetup/bone_retarget.cpp:36
// variables: 13
// function calls: 74
void CRetargetBiped::InitLengths(CRetargetingChain* pDstChain, const CTransform* pParentTransforms)
{
	float flLength; // 38
	{
		int j; // 45
		{
			matrix3x4a_t matOrientedChild; // 47
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			VectorAligned::operator fltx4(); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 48
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 50
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 220
			CUtlMemory<CAnimRetargetElementData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
					int i);  // 220
			CRetargetingChain::pElement(
				int nElement);  // 50
			{
				fltx4 retVal; // 1478
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1479
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 1481
			}
			SetWSIMD<>(fltx4 a,
					float f);  // 71
			VectorAligned::operator fltx4(); // 71
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 71
			CTransform::GetOrigin(); // 53
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 50
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 50
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 50
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 50
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 51
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 53
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1694
			{
				fltx4 retVal; // 1333
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1334
			}
			SplatZSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1314
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1315
			}
			SplatYSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1295
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1296
			}
			SplatXSIMD<>(const fltx4& a); // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1695
			Dot3SIMD<>(const fltx4& a,
					const fltx4& b);  // 298
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 299
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 300
			VectorAligned::Length(); // 53
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 53
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 47
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 220
			CUtlMemory<CAnimRetargetElementData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
					int i);  // 220
			CRetargetingChain::pElement(
				int nElement);  // 48
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 48
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 45
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 39
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 42
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 43
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 44
} /* size: 802, variables: 1, inline expansions: 8 (50 bytes) */

// <026AF443> bonesetup/bone_retarget.cpp:61
// variables: 12
// function calls: 63
void CRetargetBiped::LinkToSkeleton(CRetargetingTransforms* pDstRetarget, CBoneBitList& isUsed, const CModel* pModel, const CAnimRetargetData* pCompiledDstRetarget, int nAnimGroup)
{
	CUtlVector<int, CUtlMemory<int, int> > elementToBone; // 63
	CUtlString sBoneName; // 67
	int nCount; // 102
	CTransform* pParentTransforms; // 103
	{
		int j; // 68
		{
			int nBone; // 71
			CUtlMemory<CAnimRetargetElementData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
					int i);  // 70
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 70
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 71
		}
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 68
	}
	{
		int i; // 76
		{
			const CAnimRetargetChainData* pSrcChain; // 78
			{
				int j; // 80
				{
					int nBone; // 82
					int nParent; // 92
					Bitvec_Set(uint32* pBits,
							int nBitNum);  // 1480
					CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
					{
					}
					CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
					CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
						int bitNum);  // 90
					CUtlMemory<int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 82
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 82
					CUtlMemory<CRetargetingChain, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
							int i);  // 89
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 89
					BitVec_IsBitSet(const uint32* pBase,
							int nBitNum);  // 1471
					CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
					{
					}
					CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
					CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
						int bitNum);  // 93
					CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
					Bitvec_Set(uint32* pBits,
							int nBitNum);  // 1480
					CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
					{
					}
					CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
						int bitNum);  // 95
					CUtlString::Get(); // 99
					CUtlString::String(); // 85
				}
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 80
			}
			CUtlMemory<CRetargetingChain, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
					int i);  // 78
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 79
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1069
			CUtlMemory<int, int>::NumAllocated(); // 782
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
						int num);  // 1071
			CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCount(
					int num);  // 79
		}
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 76
	}
	{
		int i; // 105
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 105
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 107
	}
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::Count(); // 64
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 63
	CUtlString::CUtlString(); // 67
	CUtlString::~CUtlString(); // 112
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 112
} /* size: 0, variables: 4, inline expansions: 14 (237 bytes) */

// <02690723> bonesetup/bone_retarget.cpp:117
// member variables: 2
// struct size: 8
struct RetargetKey_t {
	int32 m_nGroupType; /* 0 4 */
	int32 m_nChainType; /* 4 4 */
};

// <026AF401> bonesetup/bone_retarget.cpp:123
bool RetargetKeyLessFunc(const RetargetKey_t& k1, const RetargetKey_t& k2)
{
} /* size: 42 */

// <026AD856> bonesetup/bone_retarget.cpp:141
// variables: 10
// function calls: 113
void CRetargetBiped::FindMatchingChains(CRetargetingTransforms* pDstRetarget, const CModel* pModel, const CAnimRetargetData* pCompiledDstRetarget, const CAnimRetargetData* pCompiledSrcRetarget)
{
	CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)> srcRetarget; // 144
	RetargetKey_t key; // 146
	{
		int i; // 147
		{
			const CAnimRetargetChainData* pChain; // 149
			{
				short unsigned int newNode; // 1696
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 737
				Links(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
					short unsigned int i);  // 999
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 737
				Links(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
					short unsigned int i);  // 1008
				LinkToParent(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
						short unsigned int i,
						short unsigned int parent,
						bool isLeft);  // 984
				InsertAt(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
					short unsigned int parent,
					bool leftchild,
					const Node_t* pCopyFrom);  // 1696
			}
			LeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 1667
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 539
			Element(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				short unsigned int i);  // 1665
			CKeyLess::operator(
					const Node_t& left,
					const Node_t& right);  // 1665
			CKeyLess::operator(
					const Node_t& left,
					const Node_t& right);  // 1669
			RightChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 1677
			FindInsertionPosition(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
						const Node_t& insert,
						bool bCheckForDuplicates,
						short unsigned int& parent,
						bool& leftchild,
						bool& isDuplicate);  // 1693
			{
				short unsigned int newNode; // 1709
				{
				}
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
						short unsigned int i);  // 737
				Links(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
					short unsigned int i);  // 999
				LinkToParent(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
						short unsigned int i,
						short unsigned int parent,
						bool isLeft);  // 984
				InsertAt(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
					short unsigned int parent,
					bool leftchild,
					const Node_t* pCopyFrom);  // 1709
			}
			Insert(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
				const Node_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 207
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 152
			CUtlMemory<CAnimRetargetChainData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Count(); // 147
	}
	{
		int i; // 155
		{
			const CAnimRetargetChainData* pChain; // 157
			{
				int j; // 162
				CUtlMemory<CRetargetingChain, int>::NumAllocated(); // 1143
				CUtlMemory<CRetargetingChain, int>::Base(); // 112
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Base(); // 368
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::ResetDbgInfo(); // 824
				CUtlMemory<CRetargetingChain, int>::IsGrowable(); // 823
				CUtlMemory<CRetargetingChain, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CRetargetingChain, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CRetargetingChain, int>::Grow(
					int num);  // 806
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<CRetargetingChain, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Element(
					int i);  // 1148
				CUtlMemory<int, int>::ValidateGrowSize(); // 475
				CUtlMemory<int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 205
				CUtlMemory<int, int>::ValidateGrowSize(); // 475
				CUtlMemory<int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 205
				CUtlMemory<float, int>::ValidateGrowSize(); // 475
				CUtlMemory<float, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 205
				CUtlMemory<float, int>::ValidateGrowSize(); // 475
				CUtlMemory<float, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 205
				CRetargetingChain::CRetargetingChain(); // 1479
				Construct<CRetargetingChain>(CRetargetingChain* pMemory); // 1148
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::AddToTail(); // 162
				CUtlMemory<CRetargetingChain, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
						int i);  // 163
				CUtlMemory<CRetargetingChain, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
						int i);  // 164
			}
			CUtlMemory<CAnimRetargetChainData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::operator[](
					int i);  // 157
			LeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 1913
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 545
			Element(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
				short unsigned int i);  // 1912
			CKeyLess::operator(
					const KeyType_t& left,
					const Node_t& right);  // 1912
			CKeyLess::operator(
					const Node_t& left,
					const KeyType_t& right);  // 1914
			RightChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 1915
			FindAltKeyType<RetargetKey_t, CUtlMap<RetargetKey_t, int>::CKeyLess>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
												const RetargetKey_t& search,
												const CKeyLess& altLess);  // 298
			FindAltKeyType<RetargetKey_t>(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
							const RetargetKey_t& search);  // 243
			CUtlMap<RetargetKey_t, int, short unsigned int, bool (::Find(
				const KeyType_t& key);  // 160
		}
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::Count(); // 155
	}
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<RetargetKey_t, int, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 144
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	SetLessFunc(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
			const LessFunc_t& func);  // 201
	CUtlMap<RetargetKey_t, int, short unsigned int, bool (::SetLessFunc(
			LessFunc_t func);  // 145
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1248
	{
	}
	{
	}
	{
	}
	{
		Iterator_t it; // 1256
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::IsIdxValid(
				short unsigned int i);  // 81
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::First(); // 1256
		{
			short unsigned int i; // 1258
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::IsIdxValid(
					short unsigned int i);  // 661
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 611
			LeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 667
			IsValidIndex(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 659
			IsValidIndex(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CU this,
					short unsigned int i);  // 1259
			Destruct<CUtlMap<RetargetKey_t, int>::Node_t>(Node_t* pMemory); // 1261
			SetLeftChild(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this,
					short unsigned int i,
					short unsigned int child);  // 1263
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::IsIdxValid(
				short unsigned int i);  // 82
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Next(
			const Iterator_t& it);  // 1256
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1256
	}
	RemoveAll(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 1285
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int, CUtlMap<RetargetKey_t, int>::CKeyLess, CUtlMemo this); // 47
	CUtlMap<RetargetKey_t, int, short unsigned int, bool (::~CUtlMap()(const RetargetKey_t&, const RetargetKey_t&)>* this); // 169
} /* size: 0, variables: 2, inline expansions: 26 (1730 bytes) */

// <026AD348> bonesetup/bone_retarget.cpp:174
// variables: 3
// function calls: 17
void CRetargetBiped::FindReplicatedBones(CRetargetingTransforms* pDstRetarget, CBoneBitList& isUsed, const CModel* pModel, const CAnimRetargetData* pSrcRetarget, int nAnimGroup)
{
	CUtlString sBoneName; // 176
	{
		int i; // 178
		{
			int nBone; // 181
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
					int i);  // 180
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 180
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 181
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 182
			CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
				int bitNum);  // 185
		}
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 178
	}
	CUtlString::CUtlString(); // 176
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 177
	CUtlString::~CUtlString(); // 190
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <026ACE64> bonesetup/bone_retarget.cpp:193
// variable: 1
// function calls: 17
void CRetargetBiped::BuildUpdateList(CRetargetingChain* pDstRetarget, CBoneBitList& wasUpdated, int nBone)
{
	int nParent; // 200
	CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
	{
	}
	CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 1471
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
		int bitNum);  // 195
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 205
	CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
	{
	}
	CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
	Bitvec_Set(uint32* pBits,
			int nBitNum);  // 1480
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
		int bitNum);  // 206
} /* size: 0, variables: 1, inline expansions: 17 (342 bytes) */

// <026AC1C7> bonesetup/bone_retarget.cpp:213
// function calls: 67
void CRetargetBiped::~CRetargetBiped()
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 216
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 216
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 216
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 225
	CUtlMemory<CRetargetingChain, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRetargetingChain, int>::Purge(); // 903
	CUtlMemory<CRetargetingChain, int>::Purge(); // 1799
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Purge(); // 560
	ValidateAlignment<CRetargetingChain>(void); // 508
	CUtlMemory<CRetargetingChain, int>::Purge(); // 510
	CUtlMemory<CRetargetingChain, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::~CUtlVector(); // 225
	CRetargetingTransforms::~CRetargetingTransforms(); // 216
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 225
	CUtlMemory<CRetargetingChain, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRetargetingChain, int>::Purge(); // 903
	CUtlMemory<CRetargetingChain, int>::Purge(); // 1799
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Purge(); // 560
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::~CUtlVector(); // 225
	CRetargetingTransforms::~CRetargetingTransforms(); // 216
} /* size: 278, inline expansions: 67 (1218 bytes) */

// <026AC1AB> bonesetup/bone_retarget.cpp:213
void CRetargetBiped::~CRetargetBiped()
{
} /* size: 0 */

// <026AC106> bonesetup/bone_retarget.cpp:223
// function call: 1
void CAnimRetarget::~CAnimRetarget()
{
	CUtlString::~CUtlString(); // 226
} /* size: 78, inline expansions: 1 (19 bytes) */

// <026AC0EA> bonesetup/bone_retarget.cpp:223
void CAnimRetarget::~CAnimRetarget()
{
} /* size: 0 */

// <026AB5EC> bonesetup/bone_retarget.cpp:234
// variables: 7
// function calls: 47
void Create(const CModel* pModel)
{
	const CAnimContainer* pAnimContainer; // 236
	int nAnimGroups; // 244
	const CAnimationGroup* pDstAnimGroupResourceData; // 245
	{
		int a; // 249
		{
			CAnimRetarget* pSrcRetarget; // 251
			const CAnimationGroup* pSrcAnimGroupResourceData; // 257
			CRetargetBiped* pRetarget; // 262
			CUtlMemory<const CAnimationGroupResource::operator[](
					int i);  // 595
			CUtlVectorBase<const CAnimationGroupResource::operator[](
					int i);  // 257
			CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
			CAnimationGroupResource::GetData(); // 257
			CUtlMemory<CRetargetingChain, int>::ValidateGrowSize(); // 475
			CUtlMemory<CRetargetingChain, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::CUtlVector(); // 228
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 228
			CRetargetingTransforms::CRetargetingTransforms(); // 269
			CUtlMemory<CRetargetingChain, int>::ValidateGrowSize(); // 475
			CUtlMemory<CRetargetingChain, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::CUtlVector(); // 228
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 228
			CRetargetingTransforms::CRetargetingTransforms(); // 269
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 269
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 269
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 269
			CRetargetBiped::CRetargetBiped(); // 262
		}
	}
	CUtlVectorBase<const CAnimationGroupResource::Count(); // 241
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 245
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
	CAnimationGroupResource::GetData(); // 245
} /* size: 561, variables: 3, inline expansions: 5 (13 bytes) */

// <026A914A> bonesetup/bone_retarget.cpp:279
// variables: 22
// function calls: 141
void CRetargetBiped::Setup(const CModel* pModel, int nAnimGroup)
{
	const char   __FUNCTION__; // 51291
	CAnimContainer* pAnimContainer; // 287
	const CAnimationGroup* pDstAnimGroupResourceData; // 290
	const CAnimationGroup* pSrcAnimGroupResourceData; // 291
	int nCount; // 293
	CBoneBitList wasRead; // 300
	CBoneBitList wasWritten; // 301
	bool bHasScale; // 328
	CBoneBitList wasUpdated; // 366
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		int i; // 314
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 316
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 316
	}
	{
		int i; // 330
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 330
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 332
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 336
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 340
	}
	{
		int i; // 348
		{
			int nParent; // 356
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 360
			CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
				int bitNum);  // 357
			CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
				int bitNum);  // 359
		}
		CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
			int bitNum);  // 350
	}
	{
		int i; // 367
		{
			int j; // 372
			CUtlMemory<CRetargetingChain, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
					int i);  // 372
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 372
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
			CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
			{
			}
			CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
				int bitNum);  // 374
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 374
		}
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 367
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 371
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 369
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 369
	}
	{
		int i; // 380
		CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
			int bitNum);  // 382
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 384
	}
	{
		int i; // 389
		{
			int nParent; // 397
			CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
			{
			}
			CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 1471
			CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
				int bitNum);  // 398
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 400
			CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1479
			{
			}
			CVarBitVecBase<short unsigned int, 1024>::Base(); // 1480
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 1480
			CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::Set(
				int bitNum);  // 401
		}
		operator&(BoneFlags_t a,
				BoneFlags_t b);  // 391
		operator&(BoneFlags_t a,
				BoneFlags_t b);  // 393
		CVarBitVecBase<short unsigned int, 1024>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 1024>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::IsBitSet(
			int bitNum);  // 395
	}
	{
		int i; // 408
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 408
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 410
	}
	{
		int i; // 413
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 413
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 415
	}
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 588
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 290
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
	CAnimationGroupResource::GetData(); // 290
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 588
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 291
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::Get(); // 234
	CAnimationGroupResource::GetData(); // 291
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 300
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 301
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 420
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 420
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 308
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 308
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 366
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 420
} /* size: 0, variables: 9, inline expansions: 52 (1566 bytes) */

// <026A86C5> bonesetup/bone_retarget.cpp:425
// variables: 7
// function calls: 37
void CRetargetBiped::CopyChain(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
	{
		int j; // 427
		{
			int nSrcBone; // 432
			int nDstBone; // 433
			{
				Vector vecOrigPosition; // 439
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 439
				matrix3x4_t::SetOrigin(
						const Vector& p);  // 441
			}
			{
				matrix3x4a_t matSrcParentInv; // 445
				matrix3x4a_t matLocalOriented; // 446
				Vector vecEstPosition; // 450
				matrix3x4_t::matrix3x4_t(); // 1027
				MatrixInvert(const matrix3x4_t& in); // 445
				matrix3x4_t::matrix3x4_t(); // 290
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 290
				matrix3x4a_t::matrix3x4a_t(
						const matrix3x4_t& src);  // 445
				matrix3x4_t::matrix3x4_t(); // 977
				ConcatTransforms(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 446
				matrix3x4_t::matrix3x4_t(); // 290
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 290
				matrix3x4a_t::matrix3x4a_t(
						const matrix3x4_t& src);  // 446
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 450
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 452
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 452
				matrix3x4_t::SetOrigin(
						const Vector& p);  // 452
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
			CRetargetingChain::NumElements(); // 429
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 432
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 433
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 427
	}
} /* size: 806 */

// <026A6C46> bonesetup/bone_retarget.cpp:461
// variables: 24
// function calls: 103
void CRetargetBiped::SolveSpine(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
	int nSrcPelvis; // 463
	int nDstPelvis; // 464
	Vector vecSrcPelvis; // 467
	Vector vecDstPelvis; // 468
	int nSrcNeck; // 472
	Vector vecSrcNeckDir; // 474
	float flSrcNeckLength; // 475
	float flPrevSrcT; // 477
	int iSrc; // 478
	Vector vDeltaToPelvis; // 479
	float flNextSrcT; // 480
	float flDstScale; // 482
	float flSpineDist; // 485
	{
		int j; // 486
		{
			float flDstT; // 489
			float deltaT; // 500
			Quaternion qPrevSrc; // 505
			Quaternion qNextSrc; // 506
			Quaternion qDst; // 507
			Vector vecPrevDst; // 511
			Vector vecNextDst; // 512
			Vector vecPrevDp; // 513
			Vector vecNextDp; // 514
			Vector vecDst; // 515
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 488
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 495
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 495
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 495
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 495
			Vector::operator=(
					const Vector& vOther);  // 495
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
			CRetargetingChain::NumElements(); // 491
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 506
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 502
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 505
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 505
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 506
			Quaternion::Quaternion(); // 507
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 511
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 511
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 512
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 513
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 511
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 511
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 511
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 512
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 512
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 512
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 512
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2764
			matrix3x4_t::GetColumn(
					MatrixAxisType_t nColumn);  // 513
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 513
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 513
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 514
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2764
			matrix3x4_t::GetColumn(
					MatrixAxisType_t nColumn);  // 514
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 514
			Vector::Vector(); // 515
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 518
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 486
	}
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 463
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 464
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 468
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 467
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 470
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 472
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 472
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 474
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 474
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 474
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 479
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 479
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 479
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 479
} /* size: 1949, variables: 13, inline expansions: 30 (300 bytes) */

// <026B5B42> bonesetup/bone_retarget.cpp:528
void CRetargetBiped::SolveArm(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
} /* size: 0 */

// <026A5727> bonesetup/bone_retarget.cpp:534
// variables: 11
// function calls: 76
void CRetargetBiped::SolveLeg(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
	float flScale; // 537
	Vector vecWorldSole; // 539
	matrix3x4a_t matWorldSole; // 541
	matrix3x4a_t matSoleToAnkle; // 545
	Vector vecWorldAnkle; // 548
	matrix3x4a_t matBoneToWorld; // 551
	Vector vecWorldHip; // 559
	Vector vecEstKnee; // 563
	Vector vecEstAnkle; // 566
	Vector vecWorldKnee; // 570
	Vector vecKneeDir; // 575
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 539
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 539
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 539
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 541
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 220
	CUtlMemory<CAnimRetargetElementData, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
			int i);  // 220
	CRetargetingChain::pElement(
		int nElement);  // 546
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 543
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 548
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 552
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 563
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 559
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 559
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 560
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 563
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 563
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 566
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 564
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 566
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 566
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1315
	Vector::Vector(); // 1314
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2);  // 570
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 567
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 570
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 570
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 570
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 570
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1315
	Vector::Vector(); // 1314
	VectorRotate(const Vector& in1,
			const matrix3x4_t& in2);  // 575
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 575
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 575
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 581
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 582
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 583
	matrix3x4_t::SetColumn(
			const Vector& vColumn,
			MatrixAxisType_t nColumn);  // 647
	MatrixSetColumn(const Vector& in,
			MatrixAxisType_t nColumn,
			matrix3x4_t& out);  // 1211
	PositionMatrix(const Vector& position,
			matrix3x4_t& mat);  // 584
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 584
} /* size: 1407, variables: 11, inline expansions: 76 (1134 bytes) */

// <026A4D67> bonesetup/bone_retarget.cpp:589
// variables: 5
// function calls: 35
void CRetargetBiped::CleanupSpineAngles(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, int nStart, int nEnd)
{
	{
		int j; // 592
		{
			matrix3x4a_t& matNeckToWorld; // 594
			Vector forward; // 596
			Vector left; // 596
			Vector up; // 596
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 594
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 602
			Vector::Vector(); // 596
			Vector::Vector(); // 596
			Vector::Vector(); // 596
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2764
			matrix3x4_t::GetColumn(
					MatrixAxisType_t nColumn);  // 642
			Vector::operator=(
					const Vector& vOther);  // 642
			MatrixGetColumn(const matrix3x4_t& in,
					MatrixAxisType_t nColumn,
					Vector& out);  // 597
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2764
			matrix3x4_t::GetColumn(
					MatrixAxisType_t nColumn);  // 642
			Vector::operator=(
					const Vector& vOther);  // 642
			MatrixGetColumn(const matrix3x4_t& in,
					MatrixAxisType_t nColumn,
					Vector& out);  // 598
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 2764
			matrix3x4_t::GetColumn(
					MatrixAxisType_t nColumn);  // 642
			Vector::operator=(
					const Vector& vOther);  // 642
			MatrixGetColumn(const matrix3x4_t& in,
					MatrixAxisType_t nColumn,
					Vector& out);  // 599
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 602
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 602
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 602
			Vector::operator=(
					const Vector& vOther);  // 602
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 606
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 608
			matrix3x4_t::SetColumn(
					const Vector& vColumn,
					MatrixAxisType_t nColumn);  // 647
			MatrixSetColumn(const Vector& in,
					MatrixAxisType_t nColumn,
					matrix3x4_t& out);  // 610
			matrix3x4_t::SetColumn(
					const Vector& vColumn,
					MatrixAxisType_t nColumn);  // 647
			MatrixSetColumn(const Vector& in,
					MatrixAxisType_t nColumn,
					matrix3x4_t& out);  // 611
			matrix3x4_t::SetColumn(
					const Vector& vColumn,
					MatrixAxisType_t nColumn);  // 647
			MatrixSetColumn(const Vector& in,
					MatrixAxisType_t nColumn,
					matrix3x4_t& out);  // 612
		}
	}
} /* size: 663 */

// <026A34A4> bonesetup/bone_retarget.cpp:618
// variables: 25
// function calls: 91
void CRetargetBiped::SolveHead(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
	int nSrcNeck; // 620
	int nDstNeck; // 621
	int nSrcHead; // 623
	int nDstHead; // 624
	matrix3x4a_t matInvDstNeck; // 626
	matrix3x4a_t matLocalDstHead; // 627
	Vector vecDstNeck; // 630
	Vector vecLocalDstHead; // 634
	Vector vecDstHead; // 635
	Vector vecSrcHeadDir; // 639
	float flSrcHeadLength; // 640
	float flPrevSrcT; // 642
	int iSrc; // 643
	Vector vDeltaToNeck; // 644
	float flNextSrcT; // 645
	Vector vecHeadDp; // 647
	Vector vecNeckDp; // 648
	float flSpineDist; // 655
	{
		int j; // 656
		{
			float flDstT; // 659
			float deltaT; // 670
			Quaternion qPrevSrc; // 675
			Quaternion qNextSrc; // 676
			Quaternion qDst; // 677
			Vector vecDst; // 682
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 658
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 665
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 665
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 161
			matrix3x4_t::GetOrigin(); // 665
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 665
			Vector::operator=(
					const Vector& vOther);  // 665
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
			CRetargetingChain::NumElements(); // 661
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 676
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 672
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 675
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 675
			Quaternion::Quaternion(); // 837
			MatrixQuaternion(const matrix3x4_t& mat); // 676
			Quaternion::Quaternion(); // 677
			Vector::Vector(); // 682
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 685
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 656
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 623
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 620
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 621
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 624
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 623
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 624
	matrix3x4_t::matrix3x4_t(); // 2793
	matrix3x4_t::InverseTR(); // 626
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 626
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 627
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 630
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2,
			Vector& out);  // 1307
	Vector::Vector(); // 1306
	VectorTransform(const Vector& in1,
			const matrix3x4_t& in2);  // 635
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 632
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 634
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 635
	matrix3x4_t::SetOrigin(
			const Vector& p);  // 637
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 639
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 639
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 639
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 644
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 644
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 644
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 644
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 647
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 2764
	matrix3x4_t::GetColumn(
			MatrixAxisType_t nColumn);  // 648
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 651
	Vector::operator=(
			const Vector& vOther);  // 651
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 652
	Vector::operator=(
			const Vector& vOther);  // 652
} /* size: 1970, variables: 18, inline expansions: 62 (826 bytes) */

// <026A29E3> bonesetup/bone_retarget.cpp:693
// variables: 10
// function calls: 39
void CRetargetBiped::SolveFinger(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
	int iSrcStart; // 696
	int iDstStart; // 697
	{
		int nSrcIndex; // 704
		{
			int nDstIndex; // 706
			int nSrcBone; // 707
			int nDstBone; // 708
			{
				Vector vecOrigPosition; // 714
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 714
				matrix3x4_t::SetOrigin(
						const Vector& p);  // 716
			}
			{
				matrix3x4a_t matSrcParentInv; // 720
				matrix3x4a_t matLocalOriented; // 721
				Vector vecEstPosition; // 725
				matrix3x4_t::matrix3x4_t(); // 1027
				MatrixInvert(const matrix3x4_t& in); // 720
				matrix3x4_t::matrix3x4_t(); // 290
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 290
				matrix3x4a_t::matrix3x4a_t(
						const matrix3x4_t& src);  // 720
				matrix3x4_t::matrix3x4_t(); // 977
				ConcatTransforms(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 721
				matrix3x4_t::matrix3x4_t(); // 290
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 290
				matrix3x4a_t::matrix3x4a_t(
						const matrix3x4_t& src);  // 721
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 725
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 727
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 727
				matrix3x4_t::SetOrigin(
						const Vector& p);  // 727
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 707
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 708
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 704
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 696
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
	CRetargetingChain::NumElements(); // 696
} /* size: 894, variables: 2, inline expansions: 4 (68 bytes) */

// <026B5BED> bonesetup/bone_retarget.cpp:736
void CRetargetBiped::SolveHand(matrix3x4a_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4a_t* pSrcOrientedTransforms, const CRetargetingChain* pSrcRetarget, int nCount)
{
} /* size: 0 */

// <026A2341> bonesetup/bone_retarget.cpp:742
// variables: 15
// function calls: 16
void CRetargetBiped::UpdateChainBones(matrix3x4a_t* pDstWorldTransforms, const CRetargetingChain* pDstRetarget)
{
	const char   __FUNCTION__; // 51578
	{
		int i; // 745
		{
			int nBone; // 747
			int nParent; // 748
			matrix3x4a_t mBindPoseParent; // 749
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 752
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 747
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 749
			{
				int i; // 180
				{
					int j; // 182
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 184
				}
			}
			matrix3x4_t::IsValid(); // 752
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 745
	}
	{
		int i; // 757
		{
			int nBone; // 759
			int nParent; // 760
			matrix3x4a_t mBindPoseParent; // 761
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 771
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 759
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 761
			{
				int i; // 180
				{
					int j; // 182
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 184
				}
			}
			matrix3x4_t::IsValid(); // 771
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 757
	}
} /* size: 0, variables: 1 */

// <026A184E> bonesetup/bone_retarget.cpp:778
// variables: 8
// function calls: 34
void CRetargetBiped::ConvertBiped(matrix3x4a_t* pDstWorldTransforms, const matrix3x4a_t* pSrcOrientedTransforms, int nCount)
{
	matrix3x4a_t* pDstOrientedTransforms; // 780
	const char   __FUNCTION__; // 51480
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 782
	}
	{
		int i; // 784
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 794
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 795
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 824
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 828
		}
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 784
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 786
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 786
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 790
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 792
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 794
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 794
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 795
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 795
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 797
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 816
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 820
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 806
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 809
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 800
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 827
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 832
	}
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 782
	CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 782
} /* size: 0, variables: 2, inline expansions: 2 (3 bytes) */

// <026A12B1> bonesetup/bone_retarget.cpp:841
// variables: 8
// function calls: 18
void CRetargetBiped::ConvertReplicated(matrix3x4a_t* pDstWorldTransforms, int nCount)
{
	{
		int i; // 843
		{
			int nSrcBone; // 847
			int nDstBone; // 848
			int nSrcParent; // 849
			int nDstParent; // 850
			{
				Vector vecSrcParentOrigin; // 854
				Vector vecDstParentOrigin; // 855
				Vector vecNewOrigin; // 859
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 854
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 855
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 859
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 161
				matrix3x4_t::GetOrigin(); // 859
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 859
				matrix3x4_t::SetOrigin(
						const Vector& p);  // 860
			}
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 843
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 845
		CUtlMemory<int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 845
	}
} /* size: 353 */

// <026A0E86> bonesetup/bone_retarget.cpp:868
// variables: 7
// function calls: 12
void CRetargetBiped::ConvertWorldToOriented(matrix3x4_t* pDstOrientedTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4_t* pSrcWorldTransforms, int nCount)
{
	const char   __FUNCTION__; // 51725
	{
		int j; // 870
		{
			int nBone; // 872
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 873
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 872
			CUtlMemory<CAnimRetargetElementData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
					int i);  // 220
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 220
			CRetargetingChain::pElement(
				int nElement);  // 876
			{
				int i; // 180
				{
					int j; // 182
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 184
				}
			}
			matrix3x4_t::IsValid(); // 877
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 870
	}
} /* size: 0, variables: 1 */

// <026B5C40> bonesetup/bone_retarget.cpp:881
// variable: 1
// function calls: 3
void CRetargetBiped::ConvertWorldToOriented(matrix3x4_t* pDstOrientedTransforms, const CRetargetingTransforms* pDstRetarget, const matrix3x4_t* pSrcWorldTransforms, int nCount)
{
	{
		int i; // 883
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 883
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 885
	}
} /* size: 0 */

// <026A0E00> bonesetup/bone_retarget.cpp:881
// variable: 1
void CRetargetBiped::ConvertWorldToOriented(matrix3x4_t* pDstOrientedTransforms, const CRetargetingTransforms* pDstRetarget, const matrix3x4_t* pSrcWorldTransforms, int nCount)
{
	{
		int i; // 883
	}
} /* size: 0 */

// <026A08F1> bonesetup/bone_retarget.cpp:889
// variables: 10
// function calls: 15
void CRetargetBiped::ConvertOrientedToWorld(matrix3x4_t* pDstWorldTransforms, const CRetargetingChain* pDstRetarget, const matrix3x4_t* pSrcOrientedTransforms, int nCount)
{
	const char   __FUNCTION__; // 51725
	{
		int j; // 891
		{
			int nBone; // 893
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 894
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 898
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 902
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 893
			{
				int i; // 180
				{
					int j; // 182
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 184
				}
			}
			matrix3x4_t::IsValid(); // 898
			CUtlMemory<CAnimRetargetElementData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::operator[](
					int i);  // 220
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 220
			CRetargetingChain::pElement(
				int nElement);  // 900
			{
				int i; // 180
				{
					int j; // 182
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 184
				}
			}
			matrix3x4_t::IsValid(); // 902
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 891
	}
} /* size: 0, variables: 1 */

// <026A0790> bonesetup/bone_retarget.cpp:907
// variable: 1
// function calls: 3
void CRetargetBiped::ConvertOrientedToWorld(matrix3x4_t* pDstWorldTransforms, const CRetargetingTransforms* pDstRetarget, const matrix3x4_t* pSrcOrientedTransforms, int nCount)
{
	{
		int i; // 909
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 909
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 911
	}
} /* size: 0 */

// <026A034B> bonesetup/bone_retarget.cpp:917
// variables: 4
// function calls: 5
void CRetargetBiped::ConvertAnimation(CTransform* pParentSpaceTransforms)
{
	int nCount; // 919
	matrix3x4a_t* pWorldTransforms; // 928
	matrix3x4a_t* pSrcOrientedTransforms; // 932
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 924
	}
	{
		int i; // 883
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 883
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 885
	}
	CRetargetBiped::ConvertWorldToOriented(
				matrix3x4_t* pDstOrientedTransforms,
				const CRetargetingTransforms* pDstRetarget,
				const matrix3x4_t* pSrcWorldTransforms,
				int nCount);  // 933
} /* size: 0, variables: 3, inline expansions: 1 (65 bytes) */

// <026A019B> bonesetup/bone_retarget.cpp:954
// variables: 2
// function call: 1
void CRetargetBiped::ConvertAnimation(CAnimationResult& animResult)
{
	int nCount; // 956
	CTransform* pParentSpaceTransforms; // 961
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 958
	}
} /* size: 0, variables: 2 */

// <0269FCF7> bonesetup/bone_retarget.cpp:975
// variables: 11
// function calls: 12
void CRetargetBiped::ConvertParentToWorld(matrix3x4_t* pSrcWorldTransforms, const CUtlVector<int, CUtlMemory<int, int> >& boneList, const CTransform* pParentSpaceTransforms, int nCount)
{
	const char   __FUNCTION__; // 51676
	{
		int i; // 978
		{
			int nBone; // 980
			int nParentBone; // 982
			matrix3x4_t matLocal; // 983
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 997
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 980
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			VectorAligned::operator fltx4(); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 983
			{
				int i; // 180
				{
					int j; // 182
					FloatBits(const vec_t& f); // 112
					IsFinite(const vec_t& f); // 184
				}
			}
			matrix3x4_t::IsValid(); // 997
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 978
	}
} /* size: 0, variables: 1 */

// <0269EAEF> bonesetup/bone_retarget.cpp:1003
// variables: 22
// function calls: 81
void CRetargetBiped::ConvertWorldToParent(CTransform* pDstParentTransforms, const CUtlVector<int, CUtlMemory<int, int> >& boneList, const matrix3x4_t* pSrcWorldTransforms, int nCount)
{
	const char   __FUNCTION__; // 51676
	{
		int i; // 1006
		{
			int nBone; // 1008
			int nParentBone; // 1012
			{
				matrix3x4_t matParentInv; // 1019
				matrix3x4_t matLocal; // 1020
				matrix3x4_t::matrix3x4_t(); // 1027
				MatrixInvert(const matrix3x4_t& in); // 1019
				matrix3x4_t::matrix3x4_t(); // 1020
				Quaternion::Quaternion(); // 305
				Vector::Vector(); // 306
				matrix3x4_t::matrix3x4_t(); // 753
				Vector::LargestComponentValue(); // 755
				MatrixPosition(const matrix3x4_t& matrix,
						Vector& position);  // 757
				MatrixQuaternion(const matrix3x4_t& mat,
						Quaternion& q,
						Vector& o,
						float& flScale);  // 308
				{
					fltx4 retVal; // 186
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 187
				}
				Set4Floats<>(float p0,
						float p1,
						float p2,
						float p3);  // 111
				VectorAligned::operator=(
						fltx4 src);  // 111
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 310
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 309
				CTransform::InitFromMatrix(
						const matrix3x4_t& xform);  // 1022
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1024
			}
			MatrixQuaternion(const matrix3x4_t& mat,
					Quaternion& q,
					Vector& o,
					float& flScale);  // 308
			CTransform::InitFromMatrix(
					const matrix3x4_t& xform);  // 1015
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			VectorAligned::y(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 158
			VectorAligned::IsValid(); // 44
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 74
			QuaternionAligned::x(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1515
			GetYSIMD<>(fltx4 a); // 75
			QuaternionAligned::y(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			QuaternionAligned::z(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 77
			QuaternionAligned::w(); // 198
			FloatBits(const vec_t& f); // 112
			IsFinite(const vec_t& f); // 198
			QuaternionAligned::IsValid(); // 44
			CTransform::IsValid(); // 1024
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 392
			QuaternionAligned::operator fltx4(); // 397
			{
				fltx4 retVal; // 2350
				_mm_sqrt_ps(__m128 __A); // 2351
			}
			SqrtSIMD<>(const fltx4& a); // 393
			{
				fltx4 retVal; // 1851
				_mm_cmpeq_ps(__m128 __A,
						__m128 __B);  // 1852
			}
			CmpEqSIMD<>(const fltx4& a,
					const fltx4& b);  // 395
			{
				fltx4 retVal; // 1662
				_mm_div_ps(__m128 __A,
						__m128 __B);  // 1663
			}
			DivSIMD<>(const fltx4& a,
					const fltx4& b);  // 397
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 397
			QuaternionAligned::Normalize(); // 1026
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1008
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1006
	}
} /* size: 0, variables: 1 */

// <026B5D49> bonesetup/bone_retarget.cpp:1035
// variables: 6
// function calls: 10
void CRetargetBiped::GetBoneDefaults(const CUtlVector<int, CUtlMemory<int, int> >& boneList, CTransform* pTransforms)
{
	const CAnimContainer* pContainer; // 1040
	int nBone; // 1044
	int nCount; // 1046
	int nCopy; // 1048
	const int* pBoneList; // 1049
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1048
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 1049
	{
	}
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 1055
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 1056
	CRetargetBiped::GetBoneDefaults(
			const CUtlVector<int, CUtlMemory<int, int> >& boneList,
			CTransform* pTransforms);  // 1035
} /* size: 0, variables: 5, inline expansions: 9 (298 bytes) */

// <0269EA53> bonesetup/bone_retarget.cpp:1035
// variables: 7
void CRetargetBiped::GetBoneDefaults(const CUtlVector<int, CUtlMemory<int, int> >& boneList, CTransform* pTransforms)
{
	const CAnimContainer* pContainer; // 1040
	int nBone; // 1044
	int nCount; // 1046
	int nCopy; // 1048
	const int* pBoneList; // 1049
	const char   __FUNCTION__; // 51551
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1053
	}
} /* size: 0, variables: 6 */

// <0269E520> bonesetup/bone_retarget.cpp:1080
// variables: 6
// function calls: 14
void CRetargetBiped::ConvertWeightlist(CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& tmpWeights)
{
	const char   __FUNCTION__; // 51605
	{
		int i; // 1082
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1087
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1088
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1117
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1121
		}
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::Count(); // 1082
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 1093
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 1090
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 1084
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1084
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 1087
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 1088
		CUtlMemory<CRetargetingChain, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CRetargetingChain, CUtlMemory<CRetargetingChain, int> >::operator[](
				int i);  // 1088
	}
} /* size: 0, variables: 1 */

// <0269DFB6> bonesetup/bone_retarget.cpp:1129
// variables: 7
// function calls: 21
void CRetargetBiped::ConvertWeightlistChain(CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& tmpWeights, const CRetargetingChain* pDstRetarget, const CRetargetingChain* pSrcRetarget)
{
	int iSrc; // 1141
	float flPrevSrcT; // 1142
	float flNextSrcT; // 1143
	float flChainDist; // 1148
	{
		int j; // 1149
		{
			float flDstT; // 1152
			float deltaT; // 1162
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1151
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
			CRetargetingChain::NumElements(); // 1166
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1158
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1168
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 1164
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1168
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1168
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 219
		CRetargetingChain::NumElements(); // 1149
	}
	CUtlMemory<float, int>::operator[](
			int i);  // 595
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1143
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1145
	CUtlMemory<int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 1145
} /* size: 536, variables: 4, inline expansions: 6 (8 bytes) */

// <0269D795> bonesetup/bone_retarget.cpp:1178
// variables: 7
// function calls: 32
void CRetargetBiped::ConvertWeightlistChain(CUtlVector<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int> >& tmpWeights, int nDstBone, int nSrcBone0, int nSrcBone1, float deltaT)
{
	const CAnimContainer* pContainer; // 1180
	int nDstChannel; // 1182
	int nDstIndex; // 1182
	int nSrcChannel; // 1183
	int nSrcIndex0; // 1183
	int nSrcIndex1; // 1183
	float t; // 1190
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int i);  // 1191
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1188
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1186
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1191
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1196
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1216
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1218
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int i);  // 1221
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1221
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1226
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1240
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int i);  // 1242
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1242
	CUtlMemory<ChannelElementMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
			int i);  // 1210
	CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<float, CUtlMemory<float, int> >, CUtlMemory<CUtlVector<float, CUtlMemory<float, int> >, i this,
			int i);  // 1212
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 1212
} /* size: 388, variables: 7, inline expansions: 32 (256 bytes) */

