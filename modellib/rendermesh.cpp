
//
// modellib/rendermesh.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 172
//	struct: 1
//

// <04CA3015> modellib/rendermesh.cpp:16
// member variables: 2
// struct size: 24
struct RenderMeshKeyToFlagMap_t {
	CKV3MemberName m_Key; /* 0 16 */
	RenderMeshDrawPrimitiveFlags_t m_nFlag; /* 16 4 */
};

// <04CD906A> modellib/rendermesh.cpp:34
// variables: 4
void SetKV3RenderMeshFlags(KeyValues3* pKeyValues, RenderMeshDrawPrimitiveFlags_t nFlags)
{
	{
		const RenderMeshKeyToFlagMap_t& map; // 36
		RenderMeshKeyToFlagMap_t& __for_range; // 10362
		RenderMeshKeyToFlagMap_t* __for_begin; // 10368
		RenderMeshKeyToFlagMap_t* __for_end; // 10368
	}
} /* size: 0 */

// <0201DED8> modellib/rendermesh.cpp:34
// variables: 4
void SetKV3RenderMeshFlags(KeyValues3* pKeyValues, RenderMeshDrawPrimitiveFlags_t nFlags)
{
	{
		const RenderMeshKeyToFlagMap_t& map; // 36
		RenderMeshKeyToFlagMap_t& __for_range; // 17885
		RenderMeshKeyToFlagMap_t* __for_begin; // 17891
		RenderMeshKeyToFlagMap_t* __for_end; // 17891
	}
} /* size: 0 */

// <00BFBCAB> modellib/rendermesh.cpp:34
// variables: 4
void SetKV3RenderMeshFlags(KeyValues3* pKeyValues, RenderMeshDrawPrimitiveFlags_t nFlags)
{
	{
		const RenderMeshKeyToFlagMap_t& map; // 36
		RenderMeshKeyToFlagMap_t& __for_range; // 24864
		RenderMeshKeyToFlagMap_t* __for_begin; // 24870
		RenderMeshKeyToFlagMap_t* __for_end; // 24870
	}
} /* size: 0 */

// <04CD8FEE> modellib/rendermesh.cpp:45
// variables: 6
RenderMeshDrawPrimitiveFlags_t GetRenderMeshFlagsFromKV3(const KeyValues3* pSourceKeyValues)
{
	RenderMeshDrawPrimitiveFlags_t nFlags; // 53
	{
		const KeyValues3* pV1Flags; // 48
	}
	{
		const RenderMeshKeyToFlagMap_t& map; // 54
		RenderMeshKeyToFlagMap_t& __for_range; // 10362
		RenderMeshKeyToFlagMap_t* __for_begin; // 10368
		RenderMeshKeyToFlagMap_t* __for_end; // 10368
	}
} /* size: 0, variables: 1 */

// <0201DE5C> modellib/rendermesh.cpp:45
// variables: 6
RenderMeshDrawPrimitiveFlags_t GetRenderMeshFlagsFromKV3(const KeyValues3* pSourceKeyValues)
{
	RenderMeshDrawPrimitiveFlags_t nFlags; // 53
	{
		const KeyValues3* pV1Flags; // 48
	}
	{
		const RenderMeshKeyToFlagMap_t& map; // 54
		RenderMeshKeyToFlagMap_t& __for_range; // 17885
		RenderMeshKeyToFlagMap_t* __for_begin; // 17891
		RenderMeshKeyToFlagMap_t* __for_end; // 17891
	}
} /* size: 0, variables: 1 */

// <00BFBC2F> modellib/rendermesh.cpp:45
// variables: 6
RenderMeshDrawPrimitiveFlags_t GetRenderMeshFlagsFromKV3(const KeyValues3* pSourceKeyValues)
{
	RenderMeshDrawPrimitiveFlags_t nFlags; // 53
	{
		const KeyValues3* pV1Flags; // 48
	}
	{
		const RenderMeshKeyToFlagMap_t& map; // 54
		RenderMeshKeyToFlagMap_t& __for_range; // 24864
		RenderMeshKeyToFlagMap_t* __for_begin; // 24870
		RenderMeshKeyToFlagMap_t* __for_end; // 24870
	}
} /* size: 0, variables: 1 */

// <04CD8CC4> modellib/rendermesh.cpp:67
// function calls: 15
void CRenderSkeleton::CRenderSkeleton()
{
	CUtlMemory<RenderSkeletonBone_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderSkeletonBone_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::CUtlVector(); // 68
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 68
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 68
} /* size: 107, inline expansions: 15 (141 bytes) */

// <04CD8CA8> modellib/rendermesh.cpp:67
void CRenderSkeleton::CRenderSkeleton()
{
} /* size: 0 */

// <04CD861B> modellib/rendermesh.cpp:72
// variable: 1
// function calls: 27
void CRenderSkeleton::AddBone(RenderSkeletonBone_t& bone)
{
	int nBone; // 74
	CUtlMemory<RenderSkeletonBone_t, int>::NumAllocated(); // 1196
	CUtlMemory<RenderSkeletonBone_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 98
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 98
	RenderSkeletonBone_t::RenderSkeletonBone_t(
				const RenderSkeletonBone_t  &);  // 1520
	CopyConstruct<RenderSkeletonBone_t>(RenderSkeletonBone_t* pMemory,
						const RenderSkeletonBone_t& src);  // 1201
	CUtlMemory<RenderSkeletonBone_t, int>::Base(); // 112
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Base(); // 368
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::AddToTail(
			const RenderSkeletonBone_t& src);  // 74
	CUtlString::Get(); // 75
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 75
	CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
	CUtlMemory<CUtlStringToken, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
		int i);  // 1252
	Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
	CUtlMemory<CUtlStringToken, int>::Base(); // 112
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
			CUtlStringToken& src);  // 75
} /* size: 0, variables: 1, inline expansions: 27 (999 bytes) */

// <04CD6F30> modellib/rendermesh.cpp:80
// variables: 7
// function calls: 99
void CRenderSkeleton::RemoveBones(const CUtlVector<int, CUtlMemory<int, int> >& oldToNew, const CUtlVector<int, CUtlMemory<int, int> >& newToOld)
{
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > newBones; // 82
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > newHashes; // 84
	CUtlVector<int, CUtlMemory<int, int> > newParents; // 86
	{
		int nNew; // 91
		{
			int nOld; // 93
			{
				int nOldParent; // 100
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 100
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 101
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 103
			}
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 98
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 98
			Vector::operator=(
					const Vector& vOther);  // 89
			Vector::operator=(
					const Vector& vOther);  // 89
			SkeletonBoneBounds_t::operator=(
					const SkeletonBoneBounds_t  &);  // 98
			RenderSkeletonBone_t::operator=(
					const RenderSkeletonBone_t  &);  // 96
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 93
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
					int i);  // 94
			CUtlMemory<RenderSkeletonBone_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::operator[](
					int i);  // 96
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 91
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 83
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::CUtlVector(); // 82
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 85
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 84
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 86
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 87
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Count(); // 87
	CUtlMemory<RenderSkeletonBone_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<RenderSkeletonBone_t*>(RenderSkeletonBone_t *& x,
							RenderSkeletonBone_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<RenderSkeletonBone_t, int>::Swap(
		CUtlMemory<RenderSkeletonBone_t, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<RenderSkeletonBone_t*>(RenderSkeletonBone_t *& __a,
					RenderSkeletonBone_t *& __b);  // 19
	V_swap<RenderSkeletonBone_t*>(RenderSkeletonBone_t *& x,
					RenderSkeletonBone_t *& y);  // 1354
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Swap(
		CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >& vec);  // 112
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlStringToken*>(CUtlStringToken *& x,
						CUtlStringToken *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlStringToken, int>::Swap(
		CUtlMemory<CUtlStringToken, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CUtlStringToken*>(CUtlStringToken *& __a,
				CUtlStringToken *& __b);  // 19
	V_swap<CUtlStringToken*>(CUtlStringToken *& x,
				CUtlStringToken *& y);  // 1354
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Swap(
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& vec);  // 113
	CUtlMemory<int, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<int*>(int *& x,
					int *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<int, int>::Swap(
		CUtlMemory<int, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<int*>(int *& __a,
			int *& __b);  // 19
	V_swap<int*>(int *& x,
			int *& y);  // 1354
	CUtlVectorBase<int, CUtlMemory<int, int> >::Swap(
		CUtlVectorBase<int, CUtlMemory<int, int> >& vec);  // 114
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 115
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 115
	{
		int i; // 1721
		CUtlMemory<RenderSkeletonBone_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 98
		CUtlString::~CUtlString(); // 98
		RenderSkeletonBone_t::~RenderSkeletonBone_t(); // 1526
		Destruct<RenderSkeletonBone_t>(RenderSkeletonBone_t* pMemory); // 1723
	}
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderSkeletonBone_t, int>::Purge(); // 903
	CUtlMemory<RenderSkeletonBone_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Purge(); // 560
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::~CUtlVector(); // 115
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 89
} /* size: 0, variables: 3, inline expansions: 69 (0 bytes) */

// <04CDB2D8> modellib/rendermesh.cpp:117
// function call: 1
void CRenderSkeleton::GetBoneCount()
{
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Count(); // 119
} /* size: 8, inline expansions: 1 (0 bytes) */

// <04CD6F14> modellib/rendermesh.cpp:117
void CRenderSkeleton::GetBoneCount()
{
} /* size: 0 */

// <04CDB332> modellib/rendermesh.cpp:122
// function calls: 2
void CRenderSkeleton::GetBone(int nBone)
{
	CUtlMemory<RenderSkeletonBone_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::operator[](
			int i);  // 124
} /* size: 20, inline expansions: 2 (30 bytes) */

// <04CD6EEC> modellib/rendermesh.cpp:122
void CRenderSkeleton::GetBone(int nBone)
{
} /* size: 0 */

// <04CD6E83> modellib/rendermesh.cpp:132
void CRenderSkeleton::SetBoneWeightCount(int nWeightCount)
{
} /* size: 0 */

// <04CDB3DE> modellib/rendermesh.cpp:137
// variables: 2
// function calls: 3
void CRenderSkeleton::FindBoneIndex(uint32 nBoneHash)
{
	int nHashes; // 139
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 139
	{
		int b; // 140
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 142
	}
} /* size: 54, variables: 1, inline expansions: 1 (4 bytes) */

// <04CD6E43> modellib/rendermesh.cpp:137
// variables: 2
void CRenderSkeleton::FindBoneIndex(uint32 nBoneHash)
{
	int nHashes; // 139
	{
		int b; // 140
	}
} /* size: 0, variables: 1 */

// <04CDB4D6> modellib/rendermesh.cpp:148
// variable: 1
// function calls: 7
void CRenderSkeleton::FindBoneIndex(const char* pBoneName)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 150
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 139
	{
		int b; // 140
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 142
	}
	CRenderSkeleton::FindBoneIndex(
			uint32 nBoneHash);  // 150
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04CD6E1B> modellib/rendermesh.cpp:148
void CRenderSkeleton::FindBoneIndex(const char* pBoneName)
{
} /* size: 0 */

// <04CD6AB3> modellib/rendermesh.cpp:153
// variable: 1
// function calls: 12
void CRenderSkeleton::GetParent(int nBone)
{
	CUtlMemory<RenderSkeletonBone_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::operator[](
			int i);  // 124
	CRenderSkeleton::GetBone(
		int nBone);  // 155
	CUtlString::Get(); // 155
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 150
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count(); // 139
	{
		int b; // 140
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 142
	}
	CRenderSkeleton::FindBoneIndex(
			uint32 nBoneHash);  // 150
	CRenderSkeleton::FindBoneIndex(
			const char* pBoneName);  // 155
} /* size: 0, inline expansions: 10 (395 bytes) */

// <04CD676F> modellib/rendermesh.cpp:158
// variables: 2
// function calls: 10
void CRenderSkeleton::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	int nBones; // 160
	{
		int b; // 162
		CUtlMemory<CUtlStringToken, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
				int i);  // 164
		CUtlMemory<RenderSkeletonBone_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::operator[](
				int i);  // 164
		CUtlString::Get(); // 164
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 164
	}
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Count(); // 119
	CRenderSkeleton::GetBoneCount(); // 160
} /* size: 0, variables: 1, inline expansions: 2 (8 bytes) */

// <04CD646E> modellib/rendermesh.cpp:172
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 64618
		RenderInputLayout_t__** __for_begin; // 64628
		RenderInputLayout_t__** __for_end; // 64638
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 173
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 173
	CRenderBufferBinding::CRenderBufferBinding(); // 173
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 64618
		RenderInputLayout_t__** __for_begin; // 64628
		RenderInputLayout_t__** __for_end; // 64638
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 173
} /* size: 191, inline expansions: 9 (165 bytes) */

// <04CD6426> modellib/rendermesh.cpp:172
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 61965
		RenderInputLayout_t__** __for_begin; // 61971
		RenderInputLayout_t__** __for_end; // 61971
	}
} /* size: 0 */

// <0201B2DC> modellib/rendermesh.cpp:172
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 6605
		RenderInputLayout_t__** __for_begin; // 6615
		RenderInputLayout_t__** __for_end; // 6625
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 173
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 173
	CRenderBufferBinding::CRenderBufferBinding(); // 173
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 6605
		RenderInputLayout_t__** __for_begin; // 6615
		RenderInputLayout_t__** __for_end; // 6625
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 173
} /* size: 0, inline expansions: 9 (0 bytes) */

// <0201B294> modellib/rendermesh.cpp:172
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 3952
		RenderInputLayout_t__** __for_begin; // 3958
		RenderInputLayout_t__** __for_end; // 3958
	}
} /* size: 0 */

// <00BF90AF> modellib/rendermesh.cpp:172
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 13584
		RenderInputLayout_t__** __for_begin; // 13594
		RenderInputLayout_t__** __for_end; // 13604
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 173
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 173
	CRenderBufferBinding::CRenderBufferBinding(); // 173
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 13584
		RenderInputLayout_t__** __for_begin; // 13594
		RenderInputLayout_t__** __for_end; // 13604
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 173
} /* size: 191, inline expansions: 9 (165 bytes) */

// <00BF9067> modellib/rendermesh.cpp:172
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 10931
		RenderInputLayout_t__** __for_begin; // 10937
		RenderInputLayout_t__** __for_end; // 10937
	}
} /* size: 0 */

// <04CD6157> modellib/rendermesh.cpp:183
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 63827
		RenderInputLayout_t__** __for_begin; // 63837
		RenderInputLayout_t__** __for_end; // 63847
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 185
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 185
	CRenderBufferBinding::CRenderBufferBinding(); // 185
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 63827
		RenderInputLayout_t__** __for_begin; // 63837
		RenderInputLayout_t__** __for_end; // 63847
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 185
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04CD60D3> modellib/rendermesh.cpp:183
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 61965
		RenderInputLayout_t__** __for_begin; // 61971
		RenderInputLayout_t__** __for_end; // 61971
	}
} /* size: 0 */

// <0201AFC5> modellib/rendermesh.cpp:183
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 5814
		RenderInputLayout_t__** __for_begin; // 5824
		RenderInputLayout_t__** __for_end; // 5834
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 185
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 185
	CRenderBufferBinding::CRenderBufferBinding(); // 185
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 5814
		RenderInputLayout_t__** __for_begin; // 5824
		RenderInputLayout_t__** __for_end; // 5834
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 185
} /* size: 0, inline expansions: 9 (0 bytes) */

// <0201AF41> modellib/rendermesh.cpp:183
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 3952
		RenderInputLayout_t__** __for_begin; // 3958
		RenderInputLayout_t__** __for_end; // 3958
	}
} /* size: 0 */

// <00BF8D98> modellib/rendermesh.cpp:183
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 12793
		RenderInputLayout_t__** __for_begin; // 12803
		RenderInputLayout_t__** __for_end; // 12813
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 185
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 185
	CRenderBufferBinding::CRenderBufferBinding(); // 185
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 12793
		RenderInputLayout_t__** __for_begin; // 12803
		RenderInputLayout_t__** __for_end; // 12813
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 185
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00BF8D14> modellib/rendermesh.cpp:183
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
	{
		RenderInputLayout_t& hLayout; // 189
		RenderInputLayout_t__ *& __for_range; // 10931
		RenderInputLayout_t__** __for_begin; // 10937
		RenderInputLayout_t__** __for_end; // 10937
	}
} /* size: 0 */

// <04CD5DE2> modellib/rendermesh.cpp:195
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 62942
		RenderInputLayout_t__** __for_begin; // 62952
		RenderInputLayout_t__** __for_end; // 62962
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 197
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 197
	CRenderBufferBinding::CRenderBufferBinding(); // 197
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 62942
		RenderInputLayout_t__** __for_begin; // 62952
		RenderInputLayout_t__** __for_end; // 62962
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 197
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04CD5D3A> modellib/rendermesh.cpp:195
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 61965
		RenderInputLayout_t__** __for_begin; // 61971
		RenderInputLayout_t__** __for_end; // 61971
	}
} /* size: 0 */

// <0201AC50> modellib/rendermesh.cpp:195
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 4929
		RenderInputLayout_t__** __for_begin; // 4939
		RenderInputLayout_t__** __for_end; // 4949
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 197
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 197
	CRenderBufferBinding::CRenderBufferBinding(); // 197
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 4929
		RenderInputLayout_t__** __for_begin; // 4939
		RenderInputLayout_t__** __for_end; // 4949
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 197
} /* size: 0, inline expansions: 9 (0 bytes) */

// <0201ABA8> modellib/rendermesh.cpp:195
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 3952
		RenderInputLayout_t__** __for_begin; // 3958
		RenderInputLayout_t__** __for_end; // 3958
	}
} /* size: 0 */

// <00BF8A23> modellib/rendermesh.cpp:195
// variables: 8
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 11908
		RenderInputLayout_t__** __for_begin; // 11918
		RenderInputLayout_t__** __for_end; // 11928
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 197
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 197
	CRenderBufferBinding::CRenderBufferBinding(); // 197
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 11908
		RenderInputLayout_t__** __for_begin; // 11918
		RenderInputLayout_t__** __for_end; // 11928
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 197
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00BF897B> modellib/rendermesh.cpp:195
// variables: 4
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
	{
		RenderInputLayout_t& hLayout; // 201
		RenderInputLayout_t__ *& __for_range; // 10931
		RenderInputLayout_t__** __for_begin; // 10937
		RenderInputLayout_t__** __for_end; // 10937
	}
} /* size: 0 */

// <04CD5AFE> modellib/rendermesh.cpp:207
// function calls: 9
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(const CMaterialDrawDescriptor& other)
{
	Vector::Vector(); // 207
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 207
	CRenderBufferBinding::CRenderBufferBinding(); // 207
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 207
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04CD5AD6> modellib/rendermesh.cpp:207
void CMaterialDrawDescriptor::CMaterialDrawDescriptor(const CMaterialDrawDescriptor& other)
{
} /* size: 0 */

// <04CD59FD> modellib/rendermesh.cpp:213
// variables: 8
// function call: 1
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 61911
		RenderInputLayout_t__** __for_begin; // 61921
		RenderInputLayout_t__** __for_end; // 61931
	}
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 61911
		RenderInputLayout_t__** __for_begin; // 61921
		RenderInputLayout_t__** __for_end; // 61931
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 222
} /* size: 87, inline expansions: 1 (5 bytes) */

// <04CD5993> modellib/rendermesh.cpp:213
// variables: 4
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 61965
		RenderInputLayout_t__** __for_begin; // 61971
		RenderInputLayout_t__** __for_end; // 61971
	}
} /* size: 0 */

// <0201A86B> modellib/rendermesh.cpp:213
// variables: 8
// function call: 1
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 3898
		RenderInputLayout_t__** __for_begin; // 3908
		RenderInputLayout_t__** __for_end; // 3918
	}
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 3898
		RenderInputLayout_t__** __for_begin; // 3908
		RenderInputLayout_t__** __for_end; // 3918
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 222
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0201A801> modellib/rendermesh.cpp:213
// variables: 4
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 3952
		RenderInputLayout_t__** __for_begin; // 3958
		RenderInputLayout_t__** __for_end; // 3958
	}
} /* size: 0 */

// <00BF863E> modellib/rendermesh.cpp:213
// variables: 8
// function call: 1
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 10877
		RenderInputLayout_t__** __for_begin; // 10887
		RenderInputLayout_t__** __for_end; // 10897
	}
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 10877
		RenderInputLayout_t__** __for_begin; // 10887
		RenderInputLayout_t__** __for_end; // 10897
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 222
} /* size: 87, inline expansions: 1 (5 bytes) */

// <00BF85D4> modellib/rendermesh.cpp:213
// variables: 4
void CMaterialDrawDescriptor::~CMaterialDrawDescriptor()
{
	{
		RenderInputLayout_t& hLayout; // 215
		RenderInputLayout_t__ *& __for_range; // 10931
		RenderInputLayout_t__** __for_begin; // 10937
		RenderInputLayout_t__** __for_end; // 10937
	}
} /* size: 0 */

// <04CD592A> modellib/rendermesh.cpp:224
void CMaterialDrawDescriptor::operator=(const CMaterialDrawDescriptor& other)
{
} /* size: 41 */

// <04CD58AD> modellib/rendermesh.cpp:231
void CMaterialDrawDescriptor::Init(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount)
{
} /* size: 41 */

// <04CD57FA> modellib/rendermesh.cpp:240
void CMaterialDrawDescriptor::Init(RenderPrimitiveType_t nPrimType, int32 nBaseVertex, int32 nVertexCount, int32 nStartIndex, int32 nIndexCount, int32 nStartInstance, int32 nInstanceCount, float32 flUvDensity)
{
} /* size: 0 */

// <04CD5376> modellib/rendermesh.cpp:252
// variable: 1
// function calls: 18
void CMaterialDrawDescriptor::Init(const CMaterialDrawDescriptor& other)
{
	{
		int i; // 266
	}
	Vector::operator=(
			const Vector& vOther);  // 264
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 275
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 269
	CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 113
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Base(); // 275
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 268
	CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 112
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Base(); // 102
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CRenderBufferBinding>(const CRenderBufferBinding* pFrom,
						const CRenderBufferBinding* pFromEnd,
						CRenderBufferBinding* pTo);  // 173
	UtlTraitsCopyRange<CRenderBufferBinding>(const CRenderBufferBinding* pFrom,
						const CRenderBufferBinding* pFromEnd,
						CRenderBufferBinding* pTo);  // 1344
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CopyArray(
			const CRenderBufferBinding* pArray,
			int size);  // 275
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 666
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 280
} /* size: 399, inline expansions: 18 (390 bytes) */

// <04CD5334> modellib/rendermesh.cpp:286
void CMaterialDrawDescriptor::SetFlags(RenderMeshDrawPrimitiveFlags_t nFlags)
{
} /* size: 0 */

// <04CD51CA> modellib/rendermesh.cpp:291
// function calls: 5
void CMaterialDrawDescriptor::SetMaterial(HMaterial hMaterial)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 293
} /* size: 126, inline expansions: 5 (190 bytes) */

// <04CD50E3> modellib/rendermesh.cpp:296
// function calls: 4
void CMaterialDrawDescriptor::GetMaterial()
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator CWeakHandle<InfoForResourceTypeIMaterial2>(); // 298
} /* size: 18, inline expansions: 4 (16 bytes) */

// <04CD4DCF> modellib/rendermesh.cpp:301
// function calls: 14
void CMaterialDrawDescriptor::AddVertexBuffer(VertexBufferHandle_t hVB, uint32 nBindOffsetBytes)
{
	CastPtrToUint64(const void* p); // 303
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 268
	CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 112
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Base(); // 368
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::GrowMemory(
			int num);  // 1145
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 268
	CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 272
	CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
			int i);  // 602
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Element(
		int i);  // 1148
	CRenderBufferBinding::CRenderBufferBinding(); // 1479
	Construct<CRenderBufferBinding>(CRenderBufferBinding* pMemory); // 1148
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::AddToTail(); // 460
	CMaterialDrawDescriptor::AddVertexBuffer(
			uint64 nVB,
			uint32 nBindOffsetBytes);  // 303
} /* size: 44, inline expansions: 14 (94 bytes) */

// <04CD4CFD> modellib/rendermesh.cpp:306
// function calls: 2
void CMaterialDrawDescriptor::SetIndexBuffer(IndexBufferHandle_t hIB, uint32 nBindOffsetBytes)
{
	CastPtrToUint64(const void* p); // 308
	CMaterialDrawDescriptor::SetIndexBuffer(
			uint64 nIB,
			uint32 nBindOffsetBytes);  // 308
} /* size: 18, inline expansions: 2 (13 bytes) */

// <04CDB739> modellib/rendermesh.cpp:311
void CMaterialDrawDescriptor::SetBLAS(RenderBLASHandle_t hBLAS)
{
} /* size: 0 */

// <04CD3F98> modellib/rendermesh.cpp:316
// variables: 17
// function calls: 45
void CMaterialDrawDescriptor::GenerateBLAS()
{
	CRenderContextPtr pRenderContext; // 318
	RenderBLASHandle_t hBLAS; // 319
	IndexBufferHandle_t hIb; // 328
	const char   __FUNCTION__; // 15575
	BufferDesc_t ibDesc; // 331
	int nVertexBufferCount; // 335
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> > triangleDescs; // 336
	BLASCreateDesc_t blasDesc; // 350
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> > triangleData; // 359
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 329
	}
	{
		int i; // 340
		{
			BLASTriangleDesc_t& desc; // 342
		}
	}
	{
		int i; // 362
		{
			VertexBufferHandle_t hVb; // 364
			BufferDesc_t vbDesc; // 368
			BLASTriangleData_t& data; // 371
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
			}
		}
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 318
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 322
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 335
	CUtlMemory<BLASTriangleDesc_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::SetCount(
		int count);  // 337
	CUtlMemory<BLASTriangleDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BLASTriangleDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::CUtlVector(); // 336
	CUtlMemory<BLASTriangleData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BLASTriangleData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::CUtlVector(); // 359
	CUtlMemory<BLASTriangleData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::SetCount(
		int count);  // 360
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 903
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 1799
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::Purge(); // 560
	ValidateAlignment<BLASTriangleData_t>(void); // 508
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 510
	CUtlMemory<BLASTriangleData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::~CUtlVector(); // 387
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 903
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::Purge(); // 560
	ValidateAlignment<BLASTriangleDesc_t>(void); // 508
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 510
	CUtlMemory<BLASTriangleDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::~CUtlVector(); // 387
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 387
} /* size: 0, variables: 9, inline expansions: 45 (0 bytes) */

// <02018E06> modellib/rendermesh.cpp:316
// variables: 17
// function calls: 45
void CMaterialDrawDescriptor::GenerateBLAS()
{
	CRenderContextPtr pRenderContext; // 318
	RenderBLASHandle_t hBLAS; // 319
	IndexBufferHandle_t hIb; // 328
	const char   __FUNCTION__; // 23098
	BufferDesc_t ibDesc; // 331
	int nVertexBufferCount; // 335
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> > triangleDescs; // 336
	BLASCreateDesc_t blasDesc; // 350
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> > triangleData; // 359
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 329
	}
	{
		int i; // 340
		{
			BLASTriangleDesc_t& desc; // 342
		}
	}
	{
		int i; // 362
		{
			VertexBufferHandle_t hVb; // 364
			BufferDesc_t vbDesc; // 368
			BLASTriangleData_t& data; // 371
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
			}
		}
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 318
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 322
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 335
	CUtlMemory<BLASTriangleDesc_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::SetCount(
		int count);  // 337
	CUtlMemory<BLASTriangleDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BLASTriangleDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::CUtlVector(); // 336
	CUtlMemory<BLASTriangleData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BLASTriangleData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::CUtlVector(); // 359
	CUtlMemory<BLASTriangleData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::SetCount(
		int count);  // 360
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 903
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 1799
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::Purge(); // 560
	ValidateAlignment<BLASTriangleData_t>(void); // 508
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 510
	CUtlMemory<BLASTriangleData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::~CUtlVector(); // 387
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 903
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::Purge(); // 560
	ValidateAlignment<BLASTriangleDesc_t>(void); // 508
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 510
	CUtlMemory<BLASTriangleDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::~CUtlVector(); // 387
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 387
} /* size: 0, variables: 9, inline expansions: 45 (0 bytes) */

// <00BF6BD9> modellib/rendermesh.cpp:316
// variables: 17
// function calls: 45
void CMaterialDrawDescriptor::GenerateBLAS()
{
	CRenderContextPtr pRenderContext; // 318
	RenderBLASHandle_t hBLAS; // 319
	IndexBufferHandle_t hIb; // 328
	const char   __FUNCTION__; // 30077
	BufferDesc_t ibDesc; // 331
	int nVertexBufferCount; // 335
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> > triangleDescs; // 336
	BLASCreateDesc_t blasDesc; // 350
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> > triangleData; // 359
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 329
	}
	{
		int i; // 340
		{
			BLASTriangleDesc_t& desc; // 342
		}
	}
	{
		int i; // 362
		{
			VertexBufferHandle_t hVb; // 364
			BufferDesc_t vbDesc; // 368
			BLASTriangleData_t& data; // 371
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
			}
		}
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 318
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 322
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 335
	CUtlMemory<BLASTriangleDesc_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::SetCount(
		int count);  // 337
	CUtlMemory<BLASTriangleDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BLASTriangleDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::CUtlVector(); // 336
	CUtlMemory<BLASTriangleData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<BLASTriangleData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::CUtlVector(); // 359
	CUtlMemory<BLASTriangleData_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::SetCount(
		int count);  // 360
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 903
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 1799
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::Purge(); // 560
	ValidateAlignment<BLASTriangleData_t>(void); // 508
	CUtlMemory<BLASTriangleData_t, int>::Purge(); // 510
	CUtlMemory<BLASTriangleData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BLASTriangleData_t, CUtlMemory<BLASTriangleData_t, int> >::~CUtlVector(); // 387
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 903
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 1799
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::Purge(); // 560
	ValidateAlignment<BLASTriangleDesc_t>(void); // 508
	CUtlMemory<BLASTriangleDesc_t, int>::Purge(); // 510
	CUtlMemory<BLASTriangleDesc_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BLASTriangleDesc_t, CUtlMemory<BLASTriangleDesc_t, int> >::~CUtlVector(); // 387
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 387
} /* size: 0, variables: 9, inline expansions: 45 (1569 bytes) */

// <04CD3D97> modellib/rendermesh.cpp:392
// variables: 4
// function calls: 2
RenderInputLayout_t UpdateInputLayoutForMaterial(RenderInputLayout_t hInputLayout, const CVsInputSignatureVector* pVSSignature)
{
	const RenderInputLayoutField_t* pFields; // 397
	int nFieldCount; // 398
	{
		RenderInputLayoutField_t pFieldsOut; // 402
		int nFieldsOut; // 404
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 403
	}
} /* size: 0, variables: 2 */

// <04CD3824> modellib/rendermesh.cpp:411
// variables: 13
// function calls: 16
void CMaterialDrawDescriptor::UpdateInputLayouts()
{
	const CVsInputSignatureVector* pVSSignature; // 413
	CRenderContextPtr pRenderContext; // 423
	int nBuffers; // 430
	RenderInputLayout_t* pInputLayouts; // 431
	int nValidLayouts; // 432
	const char   __FUNCTION__; // 15717
	RenderInputLayout_t hInputLayoutHandle; // 445
	{
		const IMaterial2* pMaterial; // 416
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 416
		CInterlockedIntT<int, 4>::operator int(); // 294
		ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 416
	}
	{
		int b; // 433
		{
			VertexBufferHandle_t hVB; // 435
			RenderInputLayout_t hInputLayout; // 437
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	{
		int i; // 447
	}
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 414
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 414
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 414
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 423
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 430
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 455
} /* size: 0, variables: 7, inline expansions: 11 (0 bytes) */

// <02018692> modellib/rendermesh.cpp:411
// variables: 13
// function calls: 16
void CMaterialDrawDescriptor::UpdateInputLayouts()
{
	const CVsInputSignatureVector* pVSSignature; // 413
	CRenderContextPtr pRenderContext; // 423
	int nBuffers; // 430
	RenderInputLayout_t* pInputLayouts; // 431
	int nValidLayouts; // 432
	const char   __FUNCTION__; // 23240
	RenderInputLayout_t hInputLayoutHandle; // 445
	{
		const IMaterial2* pMaterial; // 416
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 416
		CInterlockedIntT<int, 4>::operator int(); // 294
		ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 416
	}
	{
		int b; // 433
		{
			VertexBufferHandle_t hVB; // 435
			RenderInputLayout_t hInputLayout; // 437
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	{
		int i; // 447
	}
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 414
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 414
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 414
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 423
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 430
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 455
} /* size: 0, variables: 7, inline expansions: 11 (0 bytes) */

// <00BF6465> modellib/rendermesh.cpp:411
// variables: 13
// function calls: 16
void CMaterialDrawDescriptor::UpdateInputLayouts()
{
	const CVsInputSignatureVector* pVSSignature; // 413
	CRenderContextPtr pRenderContext; // 423
	int nBuffers; // 430
	RenderInputLayout_t* pInputLayouts; // 431
	int nValidLayouts; // 432
	const char   __FUNCTION__; // 30219
	RenderInputLayout_t hInputLayoutHandle; // 445
	{
		const IMaterial2* pMaterial; // 416
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
		CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 416
		CInterlockedIntT<int, 4>::operator int(); // 294
		ResourceHandleToData<IMaterial2>(const ResourceBindingBase_t* hResource); // 416
	}
	{
		int b; // 433
		{
			VertexBufferHandle_t hVB; // 435
			RenderInputLayout_t hInputLayout; // 437
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	{
		int i; // 447
	}
	operator&(RenderMeshDrawPrimitiveFlags_t a,
			RenderMeshDrawPrimitiveFlags_t b);  // 414
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 414
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 414
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 423
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 430
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 455
} /* size: 0, variables: 7, inline expansions: 11 (112 bytes) */

// <04CDB76A> modellib/rendermesh.cpp:458
// variable: 1
// function calls: 12
void CMaterialDrawDescriptor::AddVertexBuffer(uint64 nVB, uint32 nBindOffsetBytes)
{
	int nIndex; // 460
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 268
	CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 112
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Base(); // 368
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::GrowMemory(
			int num);  // 1145
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::Base(); // 268
	CUtlMemoryFixed<CRenderBufferBinding, 4>::Base(); // 272
	CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
			int i);  // 602
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Element(
		int i);  // 1148
	CRenderBufferBinding::CRenderBufferBinding(); // 1479
	Construct<CRenderBufferBinding>(CRenderBufferBinding* pMemory); // 1148
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::AddToTail(); // 460
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <04CD37E0> modellib/rendermesh.cpp:458
// variable: 1
void CMaterialDrawDescriptor::AddVertexBuffer(uint64 nVB, uint32 nBindOffsetBytes)
{
	int nIndex; // 460
} /* size: 0, variables: 1 */

// <04CDB9F0> modellib/rendermesh.cpp:465
void CMaterialDrawDescriptor::SetIndexBuffer(uint64 nIB, uint32 nBindOffsetBytes)
{
} /* size: 0 */

// <04CD3420> modellib/rendermesh.cpp:471
// variables: 9
// function calls: 8
void CMaterialDrawDescriptor::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKeyValues; // 473
	KeyValues3* pVBList; // 474
	int nVertexBuffers; // 476
	{
		int i; // 478
		{
			KeyValues3* pVBElementKV; // 480
			CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
					int i);  // 595
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
					int i);  // 481
		}
	}
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 474
	CKV3TransferSaveContext::TargetObject(); // 473
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 476
	{
		const RenderMeshKeyToFlagMap_t& map; // 36
		RenderMeshKeyToFlagMap_t& __for_range; // 10425
		RenderMeshKeyToFlagMap_t* __for_begin; // 10435
		RenderMeshKeyToFlagMap_t* __for_end; // 10445
		operator&(RenderMeshDrawPrimitiveFlags_t a,
				RenderMeshDrawPrimitiveFlags_t b);  // 38
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 40
	}
	SetKV3RenderMeshFlags(KeyValues3* pKeyValues,
				RenderMeshDrawPrimitiveFlags_t nFlags);  // 484
} /* size: 318, variables: 3, inline expansions: 4 (123 bytes) */

// <0201828E> modellib/rendermesh.cpp:471
// variables: 9
// function calls: 8
void CMaterialDrawDescriptor::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKeyValues; // 473
	KeyValues3* pVBList; // 474
	int nVertexBuffers; // 476
	{
		int i; // 478
		{
			KeyValues3* pVBElementKV; // 480
			CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
					int i);  // 595
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
					int i);  // 481
		}
	}
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 474
	CKV3TransferSaveContext::TargetObject(); // 473
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 476
	{
		const RenderMeshKeyToFlagMap_t& map; // 36
		RenderMeshKeyToFlagMap_t& __for_range; // 17948
		RenderMeshKeyToFlagMap_t* __for_begin; // 17958
		RenderMeshKeyToFlagMap_t* __for_end; // 17968
		operator&(RenderMeshDrawPrimitiveFlags_t a,
				RenderMeshDrawPrimitiveFlags_t b);  // 38
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 40
	}
	SetKV3RenderMeshFlags(KeyValues3* pKeyValues,
				RenderMeshDrawPrimitiveFlags_t nFlags);  // 484
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <00BF6061> modellib/rendermesh.cpp:471
// variables: 9
// function calls: 8
void CMaterialDrawDescriptor::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKeyValues; // 473
	KeyValues3* pVBList; // 474
	int nVertexBuffers; // 476
	{
		int i; // 478
		{
			KeyValues3* pVBElementKV; // 480
			CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
					int i);  // 595
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
					int i);  // 481
		}
	}
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 474
	CKV3TransferSaveContext::TargetObject(); // 473
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 476
	{
		const RenderMeshKeyToFlagMap_t& map; // 36
		RenderMeshKeyToFlagMap_t& __for_range; // 24927
		RenderMeshKeyToFlagMap_t* __for_begin; // 24937
		RenderMeshKeyToFlagMap_t* __for_end; // 24947
		operator&(RenderMeshDrawPrimitiveFlags_t a,
				RenderMeshDrawPrimitiveFlags_t b);  // 38
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 40
	}
	SetKV3RenderMeshFlags(KeyValues3* pKeyValues,
				RenderMeshDrawPrimitiveFlags_t nFlags);  // 484
} /* size: 318, variables: 3, inline expansions: 4 (123 bytes) */

// <04CD2C54> modellib/rendermesh.cpp:487
// variables: 13
// function calls: 20
void CMaterialDrawDescriptor::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const KeyValues3* pSourceKeyValues; // 489
	const KeyValues3* pVBList; // 490
	const char   __FUNCTION__; // 15717
	int nVertexBuffers; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 500
	}
	{
		int i; // 505
		{
			const KeyValues3* pVBElementKV; // 507
			CUtlStack<const KeyValues3::Count(); // 413
			CKV3TransferLoadContext::LoadClassInstance<CRenderBufferBinding>(
								CRenderBufferBinding* pClassInstance,
								const KeyValues3* pNestedValue);  // 508
			CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
					int i);  // 508
		}
	}
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 490
	CKV3TransferLoadContext::SourceObject(); // 489
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 490
	{
		const KeyValues3* pV1Flags; // 48
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<9>(
					const char& str);  // 48
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 48
	}
	{
		const RenderMeshKeyToFlagMap_t& map; // 54
		RenderMeshKeyToFlagMap_t& __for_range; // 10324
		RenderMeshKeyToFlagMap_t* __for_begin; // 10334
		RenderMeshKeyToFlagMap_t* __for_end; // 10344
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 56
		operator|(RenderMeshDrawPrimitiveFlags_t a,
				RenderMeshDrawPrimitiveFlags_t b);  // 55
		operator|=(RenderMeshDrawPrimitiveFlags_t& a,
				RenderMeshDrawPrimitiveFlags_t b);  // 58
	}
	GetRenderMeshFlagsFromKV3(const KeyValues3* pSourceKeyValues); // 511
} /* size: 0, variables: 4, inline expansions: 7 (269 bytes) */

// <02017AC2> modellib/rendermesh.cpp:487
// variables: 13
// function calls: 20
void CMaterialDrawDescriptor::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const KeyValues3* pSourceKeyValues; // 489
	const KeyValues3* pVBList; // 490
	const char   __FUNCTION__; // 23240
	int nVertexBuffers; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 500
	}
	{
		int i; // 505
		{
			const KeyValues3* pVBElementKV; // 507
			CUtlStack<const KeyValues3::Count(); // 413
			CKV3TransferLoadContext::LoadClassInstance<CRenderBufferBinding>(
								CRenderBufferBinding* pClassInstance,
								const KeyValues3* pNestedValue);  // 508
			CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
					int i);  // 508
		}
	}
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 490
	CKV3TransferLoadContext::SourceObject(); // 489
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 490
	{
		const KeyValues3* pV1Flags; // 48
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<9>(
					const char& str);  // 48
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 48
	}
	{
		const RenderMeshKeyToFlagMap_t& map; // 54
		RenderMeshKeyToFlagMap_t& __for_range; // 17847
		RenderMeshKeyToFlagMap_t* __for_begin; // 17857
		RenderMeshKeyToFlagMap_t* __for_end; // 17867
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 56
		operator|(RenderMeshDrawPrimitiveFlags_t a,
				RenderMeshDrawPrimitiveFlags_t b);  // 55
		operator|=(RenderMeshDrawPrimitiveFlags_t& a,
				RenderMeshDrawPrimitiveFlags_t b);  // 58
	}
	GetRenderMeshFlagsFromKV3(const KeyValues3* pSourceKeyValues); // 511
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <00BF5895> modellib/rendermesh.cpp:487
// variables: 13
// function calls: 20
void CMaterialDrawDescriptor::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	const KeyValues3* pSourceKeyValues; // 489
	const KeyValues3* pVBList; // 490
	const char   __FUNCTION__; // 30219
	int nVertexBuffers; // 497
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 500
	}
	{
		int i; // 505
		{
			const KeyValues3* pVBElementKV; // 507
			CUtlStack<const KeyValues3::Count(); // 413
			CKV3TransferLoadContext::LoadClassInstance<CRenderBufferBinding>(
								CRenderBufferBinding* pClassInstance,
								const KeyValues3* pNestedValue);  // 508
			CUtlMemoryFixed<CRenderBufferBinding, 4>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::operator[](
					int i);  // 508
		}
	}
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 490
	CKV3TransferLoadContext::SourceObject(); // 489
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 490
	{
		const KeyValues3* pV1Flags; // 48
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<9>(
					const char& str);  // 48
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 48
	}
	{
		const RenderMeshKeyToFlagMap_t& map; // 54
		RenderMeshKeyToFlagMap_t& __for_range; // 24826
		RenderMeshKeyToFlagMap_t* __for_begin; // 24836
		RenderMeshKeyToFlagMap_t* __for_end; // 24846
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 56
		operator|(RenderMeshDrawPrimitiveFlags_t a,
				RenderMeshDrawPrimitiveFlags_t b);  // 55
		operator|=(RenderMeshDrawPrimitiveFlags_t& a,
				RenderMeshDrawPrimitiveFlags_t b);  // 58
	}
	GetRenderMeshFlagsFromKV3(const KeyValues3* pSourceKeyValues); // 511
} /* size: 0, variables: 4, inline expansions: 7 (269 bytes) */

// <04CD28C3> modellib/rendermesh.cpp:518
// function calls: 13
void CSceneObjectData::CSceneObjectData()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 518
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 518
	CUtlMemory<CMaterialDrawDescriptor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialDrawDescriptor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVector(); // 519
	CUtlMemory<CDrawCullingData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDrawCullingData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVector(); // 519
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 519
} /* size: 118, inline expansions: 13 (137 bytes) */

// <04CD28A6> modellib/rendermesh.cpp:518
void CSceneObjectData::CSceneObjectData()
{
} /* size: 0 */

// <04CD2608> modellib/rendermesh.cpp:523
// function calls: 11
void CSceneObjectData::CSceneObjectData(const Vector& vMinBounds, const Vector& vMaxBounds, RenderMeshTranslucencyType_t nTranslucencyType)
{
	CUtlMemory<CMaterialDrawDescriptor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialDrawDescriptor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVector(); // 525
	CUtlMemory<CDrawCullingData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDrawCullingData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVector(); // 525
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 525
} /* size: 0, inline expansions: 11 (0 bytes) */

// <04CD25C4> modellib/rendermesh.cpp:523
void CSceneObjectData::CSceneObjectData(const Vector& vMinBounds, const Vector& vMaxBounds, RenderMeshTranslucencyType_t nTranslucencyType)
{
} /* size: 0 */

// <04CD1AEA> modellib/rendermesh.cpp:530
// variables: 4
// function calls: 46
void CSceneObjectData::Init(const CSceneObjectData& other)
{
	const char   __FUNCTION__; // 15369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 532
	Vector::operator=(
			const Vector& vOther);  // 534
	Vector::operator=(
			const Vector& vOther);  // 535
	Vector4D::operator=(
			const Vector4D& vOther);  // 537
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 1366
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 1369
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 782
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
		{
		}
		AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 207
		CRenderBufferBinding::CRenderBufferBinding(); // 207
		CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 207
		Vector::Vector(); // 207
		CMaterialDrawDescriptor::CMaterialDrawDescriptor(
					const CMaterialDrawDescriptor& other);  // 1520
		CopyConstruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory,
							const CMaterialDrawDescriptor& src);  // 1378
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
			int i);  // 1378
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddVectorToTail<CUtlMemory<CMaterialDrawDescriptor, int> >(
									const CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& src);  // 538
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Count(); // 1366
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Count(); // 1369
	CUtlMemory<CDrawCullingData, int>::NumAllocated(); // 782
	CUtlMemory<CDrawCullingData, int>::IsGrowable(); // 823
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CDrawCullingData, int>::Grow(
		int num);  // 806
	CUtlMemory<CDrawCullingData, int>::Base(); // 112
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Base(); // 368
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<CDrawCullingData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CDrawCullingData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Element(
			int i);  // 1378
		CopyConstruct<CDrawCullingData>(CDrawCullingData* pMemory,
						const CDrawCullingData& src);  // 1378
	}
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::AddVectorToTail<CUtlMemory<CDrawCullingData, int> >(
								const CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >& src);  // 539
} /* size: 0, variables: 1, inline expansions: 26 (0 bytes) */

// <02016958> modellib/rendermesh.cpp:530
// variables: 4
// function calls: 46
void CSceneObjectData::Init(const CSceneObjectData& other)
{
	const char   __FUNCTION__; // 22892
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 532
	Vector::operator=(
			const Vector& vOther);  // 534
	Vector::operator=(
			const Vector& vOther);  // 535
	Vector4D::operator=(
			const Vector4D& vOther);  // 537
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 1366
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 1369
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 782
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
		{
		}
		AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 207
		CRenderBufferBinding::CRenderBufferBinding(); // 207
		CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 207
		Vector::Vector(); // 207
		CMaterialDrawDescriptor::CMaterialDrawDescriptor(
					const CMaterialDrawDescriptor& other);  // 1520
		CopyConstruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory,
							const CMaterialDrawDescriptor& src);  // 1378
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
			int i);  // 1378
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddVectorToTail<CUtlMemory<CMaterialDrawDescriptor, int> >(
									const CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& src);  // 538
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Count(); // 1366
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Count(); // 1369
	CUtlMemory<CDrawCullingData, int>::NumAllocated(); // 782
	CUtlMemory<CDrawCullingData, int>::IsGrowable(); // 823
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CDrawCullingData, int>::Grow(
		int num);  // 806
	CUtlMemory<CDrawCullingData, int>::Base(); // 112
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Base(); // 368
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<CDrawCullingData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CDrawCullingData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Element(
			int i);  // 1378
		CopyConstruct<CDrawCullingData>(CDrawCullingData* pMemory,
						const CDrawCullingData& src);  // 1378
	}
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::AddVectorToTail<CUtlMemory<CDrawCullingData, int> >(
								const CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >& src);  // 539
} /* size: 0, variables: 1, inline expansions: 26 (0 bytes) */

// <00BF472B> modellib/rendermesh.cpp:530
// variables: 4
// function calls: 46
void CSceneObjectData::Init(const CSceneObjectData& other)
{
	const char   __FUNCTION__; // 29871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 532
	Vector::operator=(
			const Vector& vOther);  // 534
	Vector::operator=(
			const Vector& vOther);  // 535
	Vector4D::operator=(
			const Vector4D& vOther);  // 537
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 1366
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 1369
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 782
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
		{
		}
		AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
		CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
				int nGrowSize,
				int nInitSize);  // 527
		CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 467
		CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
				int growSize,
				int initCapacity);  // 207
		CRenderBufferBinding::CRenderBufferBinding(); // 207
		CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 207
		Vector::Vector(); // 207
		CMaterialDrawDescriptor::CMaterialDrawDescriptor(
					const CMaterialDrawDescriptor& other);  // 1520
		CopyConstruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory,
							const CMaterialDrawDescriptor& src);  // 1378
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
			int i);  // 1378
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddVectorToTail<CUtlMemory<CMaterialDrawDescriptor, int> >(
									const CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& src);  // 538
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Count(); // 1366
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Count(); // 1369
	CUtlMemory<CDrawCullingData, int>::NumAllocated(); // 782
	CUtlMemory<CDrawCullingData, int>::IsGrowable(); // 823
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CDrawCullingData, int>::Grow(
		int num);  // 806
	CUtlMemory<CDrawCullingData, int>::Base(); // 112
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Base(); // 368
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<CDrawCullingData, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::operator[](
				int i);  // 1378
		CUtlMemory<CDrawCullingData, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Element(
			int i);  // 1378
		CopyConstruct<CDrawCullingData>(CDrawCullingData* pMemory,
						const CDrawCullingData& src);  // 1378
	}
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::AddVectorToTail<CUtlMemory<CDrawCullingData, int> >(
								const CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >& src);  // 539
} /* size: 0, variables: 1, inline expansions: 26 (1607 bytes) */

// <04CD17EA> modellib/rendermesh.cpp:542
// function calls: 13
void CSceneObjectData::CSceneObjectData(const CSceneObjectData* pOther)
{
	Vector::Vector(); // 542
	Vector::Vector(); // 542
	CUtlMemory<CMaterialDrawDescriptor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialDrawDescriptor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVector(); // 542
	CUtlMemory<CDrawCullingData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDrawCullingData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVector(); // 542
	Vector4D::Vector4D(); // 542
} /* size: 0, inline expansions: 13 (0 bytes) */

// <04CD17C0> modellib/rendermesh.cpp:542
void CSceneObjectData::CSceneObjectData(const CSceneObjectData* pOther)
{
} /* size: 0 */

// <04CD13FA> modellib/rendermesh.cpp:547
// variable: 1
// function calls: 20
void CSceneObjectData::~CSceneObjectData()
{
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::RemoveAll(); // 1798
	CUtlMemory<CDrawCullingData, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CDrawCullingData, int>::Purge(); // 903
	CUtlMemory<CDrawCullingData, int>::Purge(); // 1799
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::Purge(); // 560
	ValidateAlignment<CDrawCullingData>(void); // 508
	CUtlMemory<CDrawCullingData, int>::Purge(); // 510
	CUtlMemory<CDrawCullingData, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::~CUtlVector(); // 549
	{
		int i; // 1721
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
			int i);  // 1723
		Destruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory); // 1723
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::RemoveAll(); // 1798
	CUtlMemory<CMaterialDrawDescriptor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMaterialDrawDescriptor, int>::Purge(); // 903
	CUtlMemory<CMaterialDrawDescriptor, int>::Purge(); // 1799
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Purge(); // 560
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::~CUtlVector(); // 549
} /* size: 179, inline expansions: 17 (586 bytes) */

// <04CD13DD> modellib/rendermesh.cpp:547
void CSceneObjectData::~CSceneObjectData()
{
} /* size: 0 */

// <04CD1294> modellib/rendermesh.cpp:551
// function calls: 4
void CSceneObjectData::Init(const Vector& vMinBounds, const Vector& vMaxBounds, RenderMeshTranslucencyType_t nTranslucencyType)
{
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
	CSceneObjectData::SetBounds(
			const Vector& vMinBounds,
			const Vector& vMaxBounds);  // 553
	CSceneObjectData::SetTranslucencyType(
				RenderMeshTranslucencyType_t nTranslucencyType);  // 554
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04CDBA28> modellib/rendermesh.cpp:557
// function calls: 2
void CSceneObjectData::SetBounds(const Vector& vMinBounds, const Vector& vMaxBounds)
{
	Vector::operator=(
			const Vector& vOther);  // 559
	Vector::operator=(
			const Vector& vOther);  // 560
} /* size: 62, inline expansions: 2 (57 bytes) */

// <04CD125D> modellib/rendermesh.cpp:557
void CSceneObjectData::SetBounds(const Vector& vMinBounds, const Vector& vMaxBounds)
{
} /* size: 0 */

// <04CD108C> modellib/rendermesh.cpp:563
// function calls: 6
void CSceneObjectData::AddBounds(const Vector& vMinBounds, const Vector& vMaxBounds)
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1534
	VectorMin(const Vector& a,
			const Vector& b);  // 565
	Vector::operator=(
			const Vector& vOther);  // 565
	Vector::operator=(
			const Vector& vOther);  // 566
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1539
	VectorMax(const Vector& a,
			const Vector& b);  // 566
} /* size: 0, inline expansions: 6 (0 bytes) */

// <04CDBAE0> modellib/rendermesh.cpp:570
void CSceneObjectData::SetTranslucencyType(RenderMeshTranslucencyType_t nTranslucencyType)
{
} /* size: 0 */

// <04CD0C1F> modellib/rendermesh.cpp:575
// function calls: 19
void CSceneObjectData::AddDrawCall(CMaterialDrawDescriptor& drawCall)
{
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 1196
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
		int i);  // 1201
	Vector::Vector(); // 207
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 207
	CRenderBufferBinding::CRenderBufferBinding(); // 207
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 207
	CMaterialDrawDescriptor::CMaterialDrawDescriptor(
				const CMaterialDrawDescriptor& other);  // 1520
	CopyConstruct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory,
						const CMaterialDrawDescriptor& src);  // 1201
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddToTail(
			const CMaterialDrawDescriptor& src);  // 577
} /* size: 0, inline expansions: 19 (0 bytes) */

// <04CD075D> modellib/rendermesh.cpp:580
// variables: 4
// function calls: 21
void CSceneObjectData::AddDrawCall()
{
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 1143
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
		int i);  // 1148
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 173
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 173
	CRenderBufferBinding::CRenderBufferBinding(); // 173
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 64618
		RenderInputLayout_t__** __for_begin; // 64628
		RenderInputLayout_t__** __for_end; // 64638
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 173
	CMaterialDrawDescriptor::CMaterialDrawDescriptor(); // 1479
	Construct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory); // 1148
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddToTail(); // 582
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 582
} /* size: 293, inline expansions: 21 (911 bytes) */

// <020155CB> modellib/rendermesh.cpp:580
// variables: 4
// function calls: 21
void CSceneObjectData::AddDrawCall()
{
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 1143
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
		int i);  // 1148
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 173
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 173
	CRenderBufferBinding::CRenderBufferBinding(); // 173
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 6605
		RenderInputLayout_t__** __for_begin; // 6615
		RenderInputLayout_t__** __for_end; // 6625
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 173
	CMaterialDrawDescriptor::CMaterialDrawDescriptor(); // 1479
	Construct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory); // 1148
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddToTail(); // 582
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 582
} /* size: 0, inline expansions: 21 (0 bytes) */

// <00BF339E> modellib/rendermesh.cpp:580
// variables: 4
// function calls: 21
void CSceneObjectData::AddDrawCall()
{
	CUtlMemory<CMaterialDrawDescriptor, int>::NumAllocated(); // 1143
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Element(
		int i);  // 1148
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 173
	{
	}
	AlignedByteArrayExplicit_t<4, CRenderBufferBinding, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, CRenderBufferBinding>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CRenderBufferBinding, 4>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CRenderBufferBinding, 4>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 173
	CRenderBufferBinding::CRenderBufferBinding(); // 173
	{
		RenderInputLayout_t& hLayout; // 177
		RenderInputLayout_t__ *& __for_range; // 13584
		RenderInputLayout_t__** __for_begin; // 13594
		RenderInputLayout_t__** __for_end; // 13604
	}
	CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(); // 173
	CMaterialDrawDescriptor::CMaterialDrawDescriptor(); // 1479
	Construct<CMaterialDrawDescriptor>(CMaterialDrawDescriptor* pMemory); // 1148
	CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 368
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::AddToTail(); // 582
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 582
} /* size: 293, inline expansions: 21 (911 bytes) */

// <04CD06DD> modellib/rendermesh.cpp:585
// function call: 1
void CSceneObjectData::SetTintColor(Vector4D& vTint)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 587
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04CD05B3> modellib/rendermesh.cpp:590
// variables: 2
// function calls: 3
void CSceneObjectData::UpdateInputLayouts()
{
	int nDraws; // 592
	{
		int d; // 593
		CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
				int i);  // 595
	}
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 592
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04CD0463> modellib/rendermesh.cpp:602
// variables: 2
// function calls: 4
void CAttachment::CAttachment()
{
	{
		int i; // 604
	}
	CUtlString::CUtlString(); // 602
	CUtlString::CUtlString(); // 602
	{
		int i; // 604
		Quaternion::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 607
		Vector::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz);  // 606
	}
} /* size: 143, inline expansions: 2 (11 bytes) */

// <04CD0439> modellib/rendermesh.cpp:602
// variable: 1
void CAttachment::CAttachment()
{
	{
		int i; // 604
	}
} /* size: 0 */

// <04CDBB11> modellib/rendermesh.cpp:613
// function call: 1
void CAttachment::SetName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 615
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04CD040F> modellib/rendermesh.cpp:613
void CAttachment::SetName(const char* pName)
{
} /* size: 0 */

// <04CD02EF> modellib/rendermesh.cpp:618
// function calls: 2
void CAttachment::AddInfluence(const char* pName, const Vector& vOffset, const Quaternion& vRotation, float flWeight, bool bRootTransform)
{
	CUtlString::operator=(
			const char* src);  // 623
	Vector::operator=(
			const Vector& vOther);  // 624
} /* size: 192, inline expansions: 2 (48 bytes) */

// <04CCFFC1> modellib/rendermesh.cpp:633
// variables: 5
// function calls: 7
void CAttachment::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	{
		const KeyValues3* pOldInfluenceFlags; // 635
		{
			int nCount; // 637
			{
				int i; // 638
				{
					const KeyValues3* pElement; // 640
					bool bNoFlags; // 641
				}
			}
		}
		CKV3MemberName::CKV3MemberName<17>(
					const char& str);  // 635
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 338
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 338
		CKV3TransferLoadContext::FindSourceMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 635
	}
} /* size: 228 */

// <04CCF5CF> modellib/rendermesh.cpp:647
// variables: 4
// function calls: 41
void CHitBox::SetTagsFromString(const char* str)
{
	CSplitString splitter; // 649
	{
		int i; // 651
		CUtlVectorBase<char::Count(); // 651
		Min<int>(const int& val1,
			const int& val2);  // 651
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 653
		CUtlString::CUtlString(
				const char* pString);  // 432
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 432
		CUtlString::~CUtlString(); // 432
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 433
		{
			int i; // 421
		}
		CHitBox::HasTag(
			uint32 tagToken);  // 438
		{
			int i; // 441
		}
		CHitBox::AddTag(
			uint32 tagToken);  // 436
		CHitBox::AddTag(
			uint32 tagToken);  // 433
		CHitBox::AddTag(
			const char* tagToken);  // 653
	}
	{
	}
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 24
	CSplitString::CSplitString(
			const char* pString);  // 649
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 40
	CSplitString::~CSplitString(); // 655
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <04CCF41E> modellib/rendermesh.cpp:657
// function calls: 7
void CHitBoxSet::CHitBoxSet()
{
	CUtlString::CUtlString(); // 657
	CUtlMemory<CHitBox, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHitBox, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVector(); // 657
	CUtlString::CUtlString(); // 657
} /* size: 52, inline expansions: 7 (63 bytes) */

// <04CCF401> modellib/rendermesh.cpp:657
void CHitBoxSet::CHitBoxSet()
{
} /* size: 0 */

// <04CCE417> modellib/rendermesh.cpp:661
// variables: 4
// function calls: 74
void CHitBoxSet::CHitBoxSet(const CHitBoxSet& src)
{
	{
		int i; // 664
	}
	CUtlString::CUtlString(); // 661
	CUtlMemory<CHitBox, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHitBox, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVector(); // 661
	CUtlString::CUtlString(); // 661
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 663
	{
		int i; // 664
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 664
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1453
			CUtlString::CUtlString(); // 1479
			Construct<CUtlString>(CUtlString* pMemory); // 1453
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddMultipleToTail(
					int num);  // 1319
		{
			int i; // 1696
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1697
			CUtlString::~CUtlString(); // 1526
			Destruct<CUtlString>(CUtlString* pMemory); // 1697
		}
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount(
			int count);  // 573
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
		CUtlMemory<CUtlString, int>::Base(); // 113
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 209
		UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
						const CUtlString* pFromEnd,
						CUtlString* pTo);  // 200
		UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
						const CUtlString* pFromEnd,
						CUtlString* pTo);  // 574
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
				const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 434
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(
				const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 362
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 362
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 362
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 362
		CHitBox::CHitBox(
			const CHitBox  &);  // 1520
		CopyConstruct<CHitBox>(CHitBox* pMemory,
					const CHitBox& src);  // 1201
		CUtlMemory<CHitBox, int>::NumAllocated(); // 1196
		CUtlMemory<CHitBox, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Element(
			int i);  // 1201
		CUtlMemory<CHitBox, int>::Base(); // 112
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Base(); // 368
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::AddToTail(
				const CHitBox& src);  // 666
		CUtlMemory<CHitBox, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
				int i);  // 666
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 668
} /* size: 973, inline expansions: 15 (223 bytes) */

// <04CCE3E0> modellib/rendermesh.cpp:661
// variable: 1
void CHitBoxSet::CHitBoxSet(const CHitBoxSet& src)
{
	{
		int i; // 664
	}
} /* size: 0 */

// <04CDBBAA> modellib/rendermesh.cpp:671
// function calls: 4
void CHitBoxSet::SetName(const char* pName)
{
	CUtlString::operator=(
			const char* src);  // 673
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 674
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04CCE3B6> modellib/rendermesh.cpp:671
void CHitBoxSet::SetName(const char* pName)
{
} /* size: 0 */

// <04CCDCE6> modellib/rendermesh.cpp:677
// variables: 2
// function calls: 34
void CHitBoxSet::AddHitBox(const char* pName)
{
	CHitBox* pBox; // 679
	CUtlMemory<CHitBox, int>::NumAllocated(); // 1143
	CUtlMemory<CHitBox, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 379
	memset(void* __dest,
		int __ch,
		size_t __len);  // 383
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator fltx4(); // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	VectorAligned::operator=(
			fltx4 src);  // 378
	CTransform::SetToIdentity(); // 381
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 379
	CUtlString::CUtlString(); // 379
	CUtlString::CUtlString(); // 379
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 371
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 379
	CHitBox::CHitBox(); // 1479
	Construct<CHitBox>(CHitBox* pMemory); // 1148
	CUtlMemory<CHitBox, int>::Base(); // 112
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Base(); // 368
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::AddToTail(); // 679
	CHitBox::SetName(
		const char* pName);  // 680
	CUtlMemory<CHitBox, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
			int i);  // 679
} /* size: 0, variables: 1, inline expansions: 32 (0 bytes) */

// <04CCDC82> modellib/rendermesh.cpp:684
// function call: 1
void CHitBoxSet::numhitboxes()
{
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 686
} /* size: 8, inline expansions: 1 (0 bytes) */

// <04CCDBC4> modellib/rendermesh.cpp:689
// function calls: 2
void CHitBoxSet::pHitbox(int nIndex)
{
	CUtlMemory<CHitBox, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
			int i);  // 691
} /* size: 19, inline expansions: 2 (28 bytes) */

// <04CCDA75> modellib/rendermesh.cpp:694
// function calls: 5
void CHitBoxSetList::CHitBoxSetList()
{
	CUtlMemory<CHitBoxSet, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHitBoxSet, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::CUtlVector(); // 694
} /* size: 36, inline expansions: 5 (77 bytes) */

// <04CCDA58> modellib/rendermesh.cpp:694
void CHitBoxSetList::CHitBoxSetList()
{
} /* size: 0 */

// <04CCD572> modellib/rendermesh.cpp:698
// variables: 2
// function calls: 21
void CHitBoxSetList::CHitBoxSetList(const CHitBoxSetList& src)
{
	{
		int i; // 700
	}
	CUtlMemory<CHitBoxSet, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHitBoxSet, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::CUtlVector(); // 698
	{
		int i; // 700
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::Count(); // 700
		CUtlMemory<CHitBoxSet, int>::Base(); // 112
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::Base(); // 368
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CHitBoxSet, int>::IsGrowable(); // 823
		CUtlMemory<CHitBoxSet, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CHitBoxSet, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CHitBoxSet, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<CHitBoxSet, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::Element(
			int i);  // 1201
		CopyConstruct<CHitBoxSet>(CHitBoxSet* pMemory,
						const CHitBoxSet& src);  // 1201
		CUtlMemory<CHitBoxSet, int>::NumAllocated(); // 1196
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::AddToTail(
				const CHitBoxSet& src);  // 702
		CUtlMemory<CHitBoxSet, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::operator[](
				int i);  // 702
	}
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04CCD53B> modellib/rendermesh.cpp:698
// variable: 1
void CHitBoxSetList::CHitBoxSetList(const CHitBoxSetList& src)
{
	{
		int i; // 700
	}
} /* size: 0 */

// <04CCD2BC> modellib/rendermesh.cpp:706
// variables: 5
// function calls: 8
void CHitBoxSetList::MakeSetVisible(const char* pSetName)
{
	{
		int i; // 708
		{
			CHitBoxSet& set; // 710
			{
				int j; // 712
				{
					bool bVisible; // 714
					CHitBox& box; // 715
					CUtlString::Get(); // 99
					CUtlString::String(); // 714
					CUtlMemory<CHitBox, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
							int i);  // 715
				}
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 712
			}
			CUtlMemory<CHitBoxSet, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::operator[](
					int i);  // 710
		}
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::Count(); // 708
	}
} /* size: 0 */

// <04CCCF9E> modellib/rendermesh.cpp:721
// variables: 6
// function calls: 10
void CHitBoxSetList::MakeBoxSelected(const char* pSetName, const char* pBoxName)
{
	{
		int i; // 723
		{
			CHitBoxSet& set; // 725
			{
				int j; // 727
				{
					CHitBox& box; // 729
					bool bCorrectSet; // 730
					bool bCorrectBox; // 731
					CUtlMemory<CHitBox, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
							int i);  // 729
					CUtlString::Get(); // 99
					CUtlString::String(); // 730
					CUtlString::Get(); // 99
					CUtlString::String(); // 731
				}
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 727
			}
			CUtlMemory<CHitBoxSet, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::operator[](
					int i);  // 725
		}
		CUtlVectorBase<CHitBoxSet, CUtlMemory<CHitBoxSet, int> >::Count(); // 723
	}
} /* size: 0 */

// <04CCBDE0> modellib/rendermesh.cpp:741
// function calls: 84
void CRenderMesh::CRenderMesh()
{
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 748
	CUtlMemory<CSceneObjectData, int>::CUtlMemory(
			CSceneObjectData* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CSceneObjectData, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CSceneObjectData, int>::CUtlMemoryFixedGrowable_Base(
					CSceneObjectData* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, CSceneObjectData>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CSceneObjectData, 1, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CSceneObjectData, 1>::CUtlVectorFixedGrowable(
				int growSize);  // 748
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::ValidateGrowSize()(char const* const&, char const* const&)> this); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* co this); // 489
	CUtlRBTree<CUtlMap<char const::ResetDbgInfo()(char const* const&, char const* const&)>::Node_t, int, C this); // 491
	CUtlRBTree<CUtlMap<char const::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<char const::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 130
	CUtlRBTree<CUtlMap<char const::SetLessFunc(
			const LessFunc_t& func);  // 201
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	CUtlMap<char const::SetLessFunc(
			LessFunc_t func);  // 150
	CUtlDict<CAttachment, int>::SetCompareType(
			EDictCompareType compareType);  // 142
	CUtlDict<CAttachment, int>::SetCompareType(
			EDictCompareType compareType);  // 132
	CUtlDict<CAttachment, int>::CUtlDict(
		int compareType,
		int growSize,
		int initSize);  // 748
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 742
	CUtlMemory<CBaseConstraint::ValidateGrowSize(); // 475
	CUtlMemory<CBaseConstraint::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBaseConstraint::ResetDbgInfo(); // 530
	CUtlVectorBase<CBaseConstraint::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBaseConstraint::CUtlVector(); // 748
	CUtlMemory<RenderSkeletonBone_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderSkeletonBone_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::CUtlVector(); // 68
	CUtlMemory<CUtlStringToken, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlStringToken, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlVector(); // 68
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 68
	CRenderSkeleton::CRenderSkeleton(); // 748
	CUtlRBTree<CUtlMap<char const::ResetDbgInfo()(char const* const&, char const* const&)>::Node_t, int, CU this); // 491
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::ValidateGrowSize()(char const* const&, char const* const&)>: this); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* con this); // 489
	CUtlRBTree<CUtlMap<char const::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMap<char const::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 130
	CUtlRBTree<CUtlMap<char const::SetLessFunc(
			const LessFunc_t& func);  // 201
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 201
	CUtlMap<char const::SetLessFunc(
			LessFunc_t func);  // 150
	CUtlDict<CHitBoxSet, int>::SetCompareType(
			EDictCompareType compareType);  // 142
	CUtlDict<CHitBoxSet, int>::SetCompareType(
			EDictCompareType compareType);  // 132
	CUtlDict<CHitBoxSet, int>::CUtlDict(
		int compareType,
		int growSize,
		int initSize);  // 748
	CStrongHandle<InfoForResourceTypeCMorphSetData>::CStrongHandle(); // 748
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 743
	CUtlMemory<TraceDataForDraw_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TraceDataForDraw_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::CUtlVector(); // 748
	CUtlString::CUtlString(); // 748
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 748
	CUtlMemory<VertexBufferLayout_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VertexBufferLayout_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::CUtlVector(); // 748
} /* size: 642, inline expansions: 84 (1517 bytes) */

// <04CCBDC7> modellib/rendermesh.cpp:741
void CRenderMesh::CRenderMesh()
{
} /* size: 0 */

// <04CC96F8> modellib/rendermesh.cpp:752
// variables: 10
// function calls: 185
void CRenderMesh::~CRenderMesh()
{
	{
		int nTraceDatas; // 760
		{
			int t; // 761
		}
	}
	{
		int nTraceDatas; // 760
		IRenderDevice::IsEmptyAPI(); // 390
		IRenderDevice::IsNoOpDevice(); // 757
		CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Count(); // 760
		{
			int t; // 761
			CUtlMemory<TraceDataForDraw_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::operator[](
					int i);  // 763
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::operator[](
					int i);  // 765
			CUtlMemory<TraceDataForDraw_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::operator[](
					int i);  // 768
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::operator[](
					int i);  // 770
			CUtlMemory<TraceDataForDraw_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::operator[](
					int i);  // 773
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::operator[](
					int i);  // 775
		}
		{
			int i; // 1721
			CUtlMemory<TraceDataForDraw_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Element(
				int i);  // 1723
			CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
			CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 558
			TraceDataForDraw_t::~TraceDataForDraw_t(); // 1526
			Destruct<TraceDataForDraw_t>(TraceDataForDraw_t* pMemory); // 1723
		}
		CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::RemoveAll(); // 779
		{
			int i; // 1807
			CUtlMemory<CBaseConstraint::operator[](
					int i);  // 602
			CUtlVectorBase<CBaseConstraint::Element(
				int i);  // 1809
		}
		CUtlVectorBase<CBaseConstraint::RemoveAll(); // 1798
		CUtlMemory<CBaseConstraint::Purge(); // 903
		CUtlMemory<CBaseConstraint::IsExternallyAllocated(); // 905
		CUtlMemory<CBaseConstraint::Purge(); // 1799
		CUtlVectorBase<CBaseConstraint::ResetDbgInfo(); // 1800
		CUtlVectorBase<CBaseConstraint::Purge(); // 1811
		CUtlVectorBase<CBaseConstraint::PurgeAndDeleteElements(); // 781
	}
	CUtlMemory<VertexBufferLayout_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VertexBufferLayout_t, int>::Purge(); // 903
	CUtlMemory<VertexBufferLayout_t, int>::Purge(); // 1799
	CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::Purge(); // 560
	ValidateAlignment<VertexBufferLayout_t>(void); // 508
	CUtlMemory<VertexBufferLayout_t, int>::Purge(); // 510
	CUtlMemory<VertexBufferLayout_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::~CUtlVector(); // 785
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 785
	CUtlString::~CUtlString(); // 785
	{
		int i; // 1721
		CUtlMemory<TraceDataForDraw_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable(); // 558
		TraceDataForDraw_t::~TraceDataForDraw_t(); // 1526
		Destruct<TraceDataForDraw_t>(TraceDataForDraw_t* pMemory); // 1723
	}
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TraceDataForDraw_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TraceDataForDraw_t, int>::Purge(); // 903
	CUtlMemory<TraceDataForDraw_t, int>::Purge(); // 1799
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::Purge(); // 560
	ValidateAlignment<TraceDataForDraw_t>(void); // 508
	CUtlMemory<TraceDataForDraw_t, int>::Purge(); // 510
	CUtlMemory<TraceDataForDraw_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >::~CUtlVector(); // 785
	CStrongHandle<InfoForResourceTypeCMorphSetData>::~CStrongHandle(); // 785
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::Node_t, i this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 308
	{
		const char* pKey; // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 94
		CUtlMap<char const::Key(
			IndexType_t i);  // 311
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 313
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char const* con this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)>: this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)>: this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* con this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t, int, CU this); // 347
	CUtlMap<char const::Purge()(char const* const&, char const* const&)>* this); // 316
	CUtlDict<CHitBoxSet, int>::Purge(); // 138
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char const* con this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)>: this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)>: this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* con this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t, int, CU this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)>: this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::~CUtlMemory()(char const* const&, char const* const&)>: this); // 510
	CUtlRBTree<CUtlMap<char const::~CUtlRBTree()(char const* const&, char const* const&)>::Node_t, int, CU this); // 47
	CUtlMap<char const::~CUtlMap()(char const* const&, char const* const&)>* this); // 139
	CUtlDict<CHitBoxSet, int>::~CUtlDict(); // 785
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::Node_t, this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 308
	{
		const char* pKey; // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 94
		CUtlMap<char const::Key(
			IndexType_t i);  // 311
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 313
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char const* co this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)> this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)> this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* co this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t, int, C this); // 347
	CUtlMap<char const::Purge()(char const* const&, char const* const&)>* this); // 316
	CUtlDict<CAttachment, int>::Purge(); // 138
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char const* co this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)> this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)> this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char const* co this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t, int, C this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* const&)> this); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::~CUtlMemory()(char const* const&, char const* const&)> this); // 510
	CUtlRBTree<CUtlMap<char const::~CUtlRBTree()(char const* const&, char const* const&)>::Node_t, int, C this); // 47
	CUtlMap<char const::~CUtlMap()(char const* const&, char const* const&)>* this); // 139
	CUtlDict<CAttachment, int>::~CUtlDict(); // 785
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 110
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 110
	{
		int i; // 1721
		CUtlMemory<RenderSkeletonBone_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 98
		CUtlString::~CUtlString(); // 98
		RenderSkeletonBone_t::~RenderSkeletonBone_t(); // 1526
		Destruct<RenderSkeletonBone_t>(RenderSkeletonBone_t* pMemory); // 1723
	}
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderSkeletonBone_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RenderSkeletonBone_t, int>::Purge(); // 903
	CUtlMemory<RenderSkeletonBone_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Purge(); // 560
	ValidateAlignment<RenderSkeletonBone_t>(void); // 508
	CUtlMemory<RenderSkeletonBone_t, int>::Purge(); // 510
	CUtlMemory<RenderSkeletonBone_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::~CUtlVector(); // 110
	CRenderSkeleton::~CRenderSkeleton(); // 785
	CUtlVectorBase<CBaseConstraint::RemoveAll(); // 1798
	CUtlMemory<CBaseConstraint::IsExternallyAllocated(); // 905
	CUtlMemory<CBaseConstraint::Purge(); // 903
	CUtlMemory<CBaseConstraint::Purge(); // 1799
	CUtlVectorBase<CBaseConstraint::Purge(); // 560
	ValidateAlignment<CBaseConstraint*>(void); // 508
	CUtlMemory<CBaseConstraint::Purge(); // 510
	CUtlMemory<CBaseConstraint::~CUtlMemory(); // 562
	CUtlVectorBase<CBaseConstraint::~CUtlVectorBase(); // 410
	CUtlVector<CBaseConstraint::~CUtlVector(); // 785
	AlignedByteArrayExplicit_t<1, CSceneObjectData, 8>::Base(); // 237
	CUtlMemory<CSceneObjectData, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CSceneObjectData, int>::ConvertToExternalMemory(
				CSceneObjectData* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CSceneObjectData, int>::Purge_FixedGrowable(
				CSceneObjectData* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CSceneObjectData, int>::Purge_FixedGrowable(
				CSceneObjectData* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CSceneObjectData, 1, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Purge(); // 560
	ValidateAlignment<CSceneObjectData>(void); // 508
	CUtlMemory<CSceneObjectData, int>::Purge(); // 903
	CUtlMemory<CSceneObjectData, int>::Purge(); // 510
	CUtlMemory<CSceneObjectData, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CSceneObjectData, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CSceneObjectData, 1, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CSceneObjectData, 1>::~CUtlVectorFixedGrowable(); // 785
} /* size: 1532, inline expansions: 137 (4814 bytes) */

// <04CC9690> modellib/rendermesh.cpp:752
void CRenderMesh::~CRenderMesh()
{
} /* size: 36 */

// <04CC965B> modellib/rendermesh.cpp:752
// variables: 2
void CRenderMesh::~CRenderMesh()
{
	{
		int nTraceDatas; // 760
		{
			int t; // 761
		}
	}
} /* size: 0 */

// <04CC87DF> modellib/rendermesh.cpp:788
// variables: 37
// function calls: 39
void CRenderMesh::CreateBufferResources(const RuntimeBuffersInfo_t& buffersInfo, const char* pDebugName)
{
	int nVertexOffset; // 796
	CRenderContextPtr pRenderContext; // 800
	const char   __FUNCTION__; // 15788
	int nSceneObjects; // 914
	{
		int v; // 802
		{
			const BufferInfo_t* pBufferData; // 805
			const void* pVertexData; // 806
			VertexBufferHandle_t hVB; // 812
			int nVertexDataSize; // 813
			int nLayoutFieldCount; // 831
			const RenderInputLayoutField_t* pLayoutFields; // 832
			int nElementSizeInBytes; // 833
			int nBoneIdxOffset; // 834
			int nBoneIndexBits; // 835
			int nBoneWeightOffset; // 836
			int nNormalOffset; // 837
			int nTangentOffset; // 838
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 809
			}
			{
				BufferDesc_t bufferDesc; // 816
				CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 821
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 821
			}
			{
				int j; // 839
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
					int i);  // 805
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 828
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 831
			CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 832
			CUtlMemory<VertexBufferLayout_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::operator[](
					int i);  // 872
		}
	}
	{
		int i; // 886
		{
			const BufferInfo_t* pBufferData; // 889
			const void* pIndexData; // 890
			IndexBufferHandle_t hIB; // 896
			int nIndexDataSize; // 898
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 893
			}
			{
				BufferDesc_t bufferDesc; // 901
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
					int i);  // 889
		}
	}
	{
		int s; // 915
		{
			CSceneObjectData* pSceneObjectData; // 917
			{
				CMaterialDrawDescriptor& drawCall; // 918
				CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& __for_range; // 54554
				iterator __for_begin; // 36669
				iterator __for_end; // 36669
				{
					int nVBs; // 920
					int nIBIdx; // 927
					{
						int v; // 921
						{
							int nVBIdx; // 923
							CastPtrToUint64(const void* p); // 924
						}
					}
					CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 920
					CastPtrToUint64(const void* p); // 928
				}
				CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 102
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::begin(); // 918
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 104
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::end(); // 918
			}
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 917
		}
	}
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 790
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 791
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 800
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
			const int& src);  // 884
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 914
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 931
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <0200D64D> modellib/rendermesh.cpp:788
// variables: 37
// function calls: 39
void CRenderMesh::CreateBufferResources(const RuntimeBuffersInfo_t& buffersInfo, const char* pDebugName)
{
	int nVertexOffset; // 796
	CRenderContextPtr pRenderContext; // 800
	const char   __FUNCTION__; // 23311
	int nSceneObjects; // 914
	{
		int v; // 802
		{
			const BufferInfo_t* pBufferData; // 805
			const void* pVertexData; // 806
			VertexBufferHandle_t hVB; // 812
			int nVertexDataSize; // 813
			int nLayoutFieldCount; // 831
			const RenderInputLayoutField_t* pLayoutFields; // 832
			int nElementSizeInBytes; // 833
			int nBoneIdxOffset; // 834
			int nBoneIndexBits; // 835
			int nBoneWeightOffset; // 836
			int nNormalOffset; // 837
			int nTangentOffset; // 838
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 809
			}
			{
				BufferDesc_t bufferDesc; // 816
				CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 821
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 821
			}
			{
				int j; // 839
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
					int i);  // 805
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 828
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 831
			CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 832
			CUtlMemory<VertexBufferLayout_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::operator[](
					int i);  // 872
		}
	}
	{
		int i; // 886
		{
			const BufferInfo_t* pBufferData; // 889
			const void* pIndexData; // 890
			IndexBufferHandle_t hIB; // 896
			int nIndexDataSize; // 898
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 893
			}
			{
				BufferDesc_t bufferDesc; // 901
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
					int i);  // 889
		}
	}
	{
		int s; // 915
		{
			CSceneObjectData* pSceneObjectData; // 917
			{
				CMaterialDrawDescriptor& drawCall; // 918
				CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& __for_range; // 62077
				iterator __for_begin; // 44192
				iterator __for_end; // 44192
				{
					int nVBs; // 920
					int nIBIdx; // 927
					{
						int v; // 921
						{
							int nVBIdx; // 923
							CastPtrToUint64(const void* p); // 924
						}
					}
					CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 920
					CastPtrToUint64(const void* p); // 928
				}
				CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 102
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::begin(); // 918
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 104
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::end(); // 918
			}
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 917
		}
	}
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 790
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 791
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 800
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
			const int& src);  // 884
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 914
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 931
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <00BEB420> modellib/rendermesh.cpp:788
// variables: 37
// function calls: 39
void CRenderMesh::CreateBufferResources(const RuntimeBuffersInfo_t& buffersInfo, const char* pDebugName)
{
	int nVertexOffset; // 796
	CRenderContextPtr pRenderContext; // 800
	const char   __FUNCTION__; // 30290
	int nSceneObjects; // 914
	{
		int v; // 802
		{
			const BufferInfo_t* pBufferData; // 805
			const void* pVertexData; // 806
			VertexBufferHandle_t hVB; // 812
			int nVertexDataSize; // 813
			int nLayoutFieldCount; // 831
			const RenderInputLayoutField_t* pLayoutFields; // 832
			int nElementSizeInBytes; // 833
			int nBoneIdxOffset; // 834
			int nBoneIndexBits; // 835
			int nBoneWeightOffset; // 836
			int nNormalOffset; // 837
			int nTangentOffset; // 838
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 809
			}
			{
				BufferDesc_t bufferDesc; // 816
				CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 821
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 821
			}
			{
				int j; // 839
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
					int i);  // 805
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 828
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 831
			CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 113
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 832
			CUtlMemory<VertexBufferLayout_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::operator[](
					int i);  // 872
		}
	}
	{
		int i; // 886
		{
			const BufferInfo_t* pBufferData; // 889
			const void* pIndexData; // 890
			IndexBufferHandle_t hIB; // 896
			int nIndexDataSize; // 898
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 893
			}
			{
				BufferDesc_t bufferDesc; // 901
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this,
					int i);  // 889
		}
	}
	{
		int s; // 915
		{
			CSceneObjectData* pSceneObjectData; // 917
			{
				CMaterialDrawDescriptor& drawCall; // 918
				CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& __for_range; // 3520
				iterator __for_begin; // 51171
				iterator __for_end; // 51171
				{
					int nVBs; // 920
					int nIBIdx; // 927
					{
						int v; // 921
						{
							int nVBIdx; // 923
							CastPtrToUint64(const void* p); // 924
						}
					}
					CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 920
					CastPtrToUint64(const void* p); // 928
				}
				CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 102
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::begin(); // 918
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 104
				CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::end(); // 918
			}
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 917
		}
	}
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 790
	Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 791
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 800
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
			const int& src);  // 884
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 914
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 931
} /* size: 0, variables: 4, inline expansions: 15 (394 bytes) */

// <04CC8743> modellib/rendermesh.cpp:933
// variables: 2
void CRenderMesh::DestroyBufferResources()
{
	{
		int v; // 935
	}
	{
		int i; // 943
	}
} /* size: 205 */

// <04CC8481> modellib/rendermesh.cpp:965
// variables: 3
// function calls: 9
void CRenderMesh::UpdateBounds()
{
	int nSceneObjects; // 967
	{
		int s; // 977
		{
			const CSceneObjectData* pSceneObjectData; // 979
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 979
			VectorMin(const Vector& a,
					const Vector& b,
					Vector& result);  // 980
			VectorMax(const Vector& a,
					const Vector& b,
					Vector& result);  // 981
		}
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 967
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 975
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 976
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 970
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 971
} /* size: 274, variables: 1, inline expansions: 5 (72 bytes) */

// <04CC83B5> modellib/rendermesh.cpp:985
// function calls: 2
void CRenderMesh::GetBounds(Vector& vMinBounds, Vector& vMaxBounds)
{
	Vector::operator=(
			const Vector& vOther);  // 987
	Vector::operator=(
			const Vector& vOther);  // 988
} /* size: 81, inline expansions: 2 (76 bytes) */

// <04CC82DC> modellib/rendermesh.cpp:991
// variable: 1
// function calls: 3
void CRenderMesh::GetMorphSetData()
{
	const CMorphSet* pMorphSet; // 993
	CRenderMesh::GetMorphSet(); // 993
	CSmartPtr<CMorphSetData, CRefCountAccessor>::Get(); // 151
	CMorphSet::GetMorphSetData(); // 998
} /* size: 20, variables: 1, inline expansions: 3 (13 bytes) */

// <04CC8203> modellib/rendermesh.cpp:1001
// variable: 1
// function calls: 3
void CRenderMesh::GetNumFlexDescs()
{
	const CMorphSet* pMorphSet; // 1003
	CRenderMesh::GetMorphSet(); // 1003
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Count(); // 171
	CMorphSet::GetFlexDescCount(); // 1008
} /* size: 27, variables: 1, inline expansions: 3 (13 bytes) */

// <04CC812A> modellib/rendermesh.cpp:1011
// variable: 1
// function calls: 3
void CRenderMesh::GetNumFlexControllers()
{
	const CMorphSet* pMorphSet; // 1013
	CRenderMesh::GetMorphSet(); // 1013
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Count(); // 156
	CMorphSet::GetFlexControllerCount(); // 1018
} /* size: 27, variables: 1, inline expansions: 3 (13 bytes) */

// <04CC80FC> modellib/rendermesh.cpp:1021
void CRenderMesh::GetTranslucencyType()
{
} /* size: 0 */

// <04CC806D> modellib/rendermesh.cpp:1026
// function calls: 2
void CRenderMesh::GetNumBones()
{
	CUtlVectorBase<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> >::Count(); // 119
	CRenderSkeleton::GetBoneCount(); // 1028
} /* size: 11, inline expansions: 2 (0 bytes) */

// <04CC801B> modellib/rendermesh.cpp:1032
// variable: 1
void CRenderMesh::InstancePartitionIndex(CMeshInstance* pInstance)
{
	uintp nPtrValue; // 1034
} /* size: 0, variables: 1 */

// <04CC7A75> modellib/rendermesh.cpp:1038
// variable: 1
// function calls: 25
void CRenderMesh::AddSceneObject(CSceneObjectData& sceneObject)
{
	int nIndex; // 1041
	CUtlMemory<CSceneObjectData, int>::NumAllocated(); // 1143
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Element(
		int i);  // 1148
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 518
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 518
	CUtlMemory<CMaterialDrawDescriptor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialDrawDescriptor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVector(); // 519
	CUtlMemory<CDrawCullingData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDrawCullingData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVector(); // 519
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 519
	CSceneObjectData::CSceneObjectData(); // 1479
	Construct<CSceneObjectData>(CSceneObjectData* pMemory); // 1148
	CUtlMemory<CSceneObjectData, int>::Base(); // 112
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Base(); // 368
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::AddToTail(); // 1041
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 1042
} /* size: 0, variables: 1, inline expansions: 25 (0 bytes) */

// <04CC7510> modellib/rendermesh.cpp:1045
// function calls: 25
void CRenderMesh::AddSceneObject()
{
	CUtlMemory<CSceneObjectData, int>::NumAllocated(); // 1143
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Element(
		int i);  // 1148
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 518
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 518
	CUtlMemory<CMaterialDrawDescriptor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialDrawDescriptor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::CUtlVector(); // 519
	CUtlMemory<CDrawCullingData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDrawCullingData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDrawCullingData, CUtlMemory<CDrawCullingData, int> >::CUtlVector(); // 519
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 519
	CSceneObjectData::CSceneObjectData(); // 1479
	Construct<CSceneObjectData>(CSceneObjectData* pMemory); // 1148
	CUtlMemory<CSceneObjectData, int>::Base(); // 112
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Base(); // 368
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::AddToTail(); // 1047
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 1047
} /* size: 221, inline expansions: 25 (664 bytes) */

// <04CC6A47> modellib/rendermesh.cpp:1050
// variables: 3
// function calls: 41
void CRenderMesh::FindOrAddAttachment(const char* pName, bool* pDidAdd)
{
	int nIndex; // 1052
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*, CUtlMap<char const*, CAttachment, int, bool (
																const char* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<CAttachment, int>::Find(
		const char* pName);  // 1052
	Node_t::Node_t(
		const KeyType_t& k);  // 213
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1665
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1669
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1677
	CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
				const Node_t& insert,
				bool bCheckForDuplicates,
				int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		int newNode; // 1709
		{
		}
	}
	{
		int newNode; // 1696
	}
	CUtlRBTree<CUtlMap<char const::Insert(
		const Node_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 213
	CUtlString::~CUtlString(); // 321
	CUtlString::~CUtlString(); // 321
	CAttachment::~CAttachment(); // 402
	Node_t::~Node_t(); // 213
	CUtlMap<char const::Insert(
		const KeyType_t& key,
		ERBTreeInsertBehavior eInsertBehavior);  // 349
	CUtlDict<CAttachment, int>::Insert(
		const char* pName,
		ERBTreeInsertBehavior eInsertBehavior);  // 1055
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 92
	CUtlMap<char const::operator[](
			IndexType_t i);  // 180
	CUtlDict<CAttachment, int>::Element(
		int i);  // 207
	CUtlDict<CAttachment, int>::operator[](
			int i);  // 1058
	CUtlString::operator=(
			const char* src);  // 615
	CAttachment::SetName(
		const char* pName);  // 1058
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 92
	CUtlMap<char const::operator[](
			IndexType_t i);  // 180
	CUtlDict<CAttachment, int>::Element(
		int i);  // 207
	CUtlDict<CAttachment, int>::operator[](
			int i);  // 1065
} /* size: 0, variables: 1, inline expansions: 41 (1909 bytes) */

// <04CC5E20> modellib/rendermesh.cpp:1068
// variable: 1
// function calls: 51
void CRenderMesh::FindOrAddHitBoxSet(const char* pName, bool* pDidAdd)
{
	int nIndex; // 1070
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1913
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 545
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 1912
	CKeyLess::operator(
			const KeyType_t& left,
			const Node_t& right);  // 1912
	CKeyLess::operator(
			const Node_t& left,
			const KeyType_t& right);  // 1914
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 617
	CUtlRBTree<CUtlMap<char const::RightChild(
			int i);  // 1915
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*, CUtlMap<char const*, CHitBoxSet, int, bool (
																const char* const& search,
																const CKeyLess& altLess);  // 298
	CUtlRBTree<CUtlMap<char const::FindAltKeyType<char const*>(
					const char* const& search);  // 243
	CUtlMap<char const::Find(
		const KeyType_t& key);  // 360
	CUtlDict<CHitBoxSet, int>::Find(
		const char* pName);  // 1070
	CUtlString::CUtlString(); // 657
	CUtlMemory<CHitBox, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHitBox, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVector(); // 657
	CUtlString::CUtlString(); // 657
	CHitBoxSet::CHitBoxSet(); // 405
	Node_t::Node_t(
		const KeyType_t& k);  // 213
	CUtlString::~CUtlString(); // 489
	CUtlMemory<CHitBox, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHitBox, int>::Purge(); // 903
	CUtlMemory<CHitBox, int>::Purge(); // 1799
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Purge(); // 560
	ValidateAlignment<CHitBox>(void); // 508
	CUtlMemory<CHitBox, int>::Purge(); // 510
	CUtlMemory<CHitBox, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVector(); // 489
	CUtlString::~CUtlString(); // 489
	CHitBoxSet::~CHitBoxSet(); // 402
	Node_t::~Node_t(); // 213
	CUtlMap<char const::Insert(
		const KeyType_t& key,
		ERBTreeInsertBehavior eInsertBehavior);  // 349
	CUtlDict<CHitBoxSet, int>::Insert(
		const char* pName,
		ERBTreeInsertBehavior eInsertBehavior);  // 1073
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 92
	CUtlMap<char const::operator[](
			IndexType_t i);  // 180
	CUtlDict<CHitBoxSet, int>::Element(
		int i);  // 207
	CUtlDict<CHitBoxSet, int>::operator[](
			int i);  // 1076
	CUtlString::operator=(
			const char* src);  // 673
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 674
	CHitBoxSet::SetName(
		const char* pName);  // 1076
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 539
	CUtlRBTree<CUtlMap<char const::Element(
		int i);  // 92
	CUtlMap<char const::operator[](
			IndexType_t i);  // 180
	CUtlDict<CHitBoxSet, int>::Element(
		int i);  // 207
	CUtlDict<CHitBoxSet, int>::operator[](
			int i);  // 1083
} /* size: 0, variables: 1, inline expansions: 51 (0 bytes) */

// <04CC5CBB> modellib/rendermesh.cpp:1087
// function calls: 5
void CRenderMesh::SetMorphSet_V0Internal(HMorphSet_Internal hMorphSet)
{
	CWeakHandle<InfoForResourceTypeCMorphSetData>::GetBinding(); // 673
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCMorphSetData>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCMorphSetData>::operator=(
			const CWeakHandle<InfoForResourceTypeCMorphSetData>& src);  // 1089
} /* size: 0, inline expansions: 5 (0 bytes) */

// <04CC5A38> modellib/rendermesh.cpp:1092
// variable: 1
// function calls: 10
void CRenderMesh::ConvertV0MorphSetToRuntime(CConvertOldDiskCtx& convertCtx)
{
	CMorphSetData* pMorphSetData; // 1094
	CStrongHandle<InfoForResourceTypeCMorphSetData>::GetData(); // 1094
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1098
	CUtlString::operator=(
			const char* src);  // 217
	CMorphSet::SetName(
		const char* pszName);  // 1098
	CWeakHandle<InfoForResourceTypeCMorphSetData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1101
	CStrongHandle<InfoForResourceTypeCMorphSetData>::Init(
		ResourceHandleTyped_t hResource);  // 673
	CStrongHandle<InfoForResourceTypeCMorphSetData>::operator=(
			const CWeakHandle<InfoForResourceTypeCMorphSetData>& src);  // 1101
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <04CC5805> modellib/rendermesh.cpp:1104
// variables: 2
// function calls: 4
void CRenderMesh::SetMorphDataFromEmbedededV0Data(CMorphSetData* pData, const char* pName, CConvertOldDiskCtx& convertCtx, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, const char* pTextureResourceName)
{
	const char   __FUNCTION__; // 16018
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1110
	CUtlString::operator=(
			const char* src);  // 217
	CMorphSet::SetName(
		const char* pszName);  // 1110
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0200A673> modellib/rendermesh.cpp:1104
// variables: 2
// function calls: 4
void CRenderMesh::SetMorphDataFromEmbedededV0Data(CMorphSetData* pData, const char* pName, CConvertOldDiskCtx& convertCtx, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, const char* pTextureResourceName)
{
	const char   __FUNCTION__; // 23541
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1110
	CUtlString::operator=(
			const char* src);  // 217
	CMorphSet::SetName(
		const char* pszName);  // 1110
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00BE8446> modellib/rendermesh.cpp:1104
// variables: 2
// function calls: 4
void CRenderMesh::SetMorphDataFromEmbedededV0Data(CMorphSetData* pData, const char* pName, CConvertOldDiskCtx& convertCtx, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, const char* pTextureResourceName)
{
	const char   __FUNCTION__; // 30520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1110
	CUtlString::operator=(
			const char* src);  // 217
	CMorphSet::SetName(
		const char* pszName);  // 1110
} /* size: 0, variables: 1, inline expansions: 4 (56 bytes) */

// <04CC579B> modellib/rendermesh.cpp:1115
void CRenderMesh::AddBone(RenderSkeletonBone_t& bone)
{
} /* size: 16 */

// <04CC5374> modellib/rendermesh.cpp:1120
// variables: 5
// function calls: 16
void CRenderMesh::BuildHitboxIndices()
{
	int nHitBoxIndex; // 1123
	int nHitBoxSets; // 1124
	{
		int hbs; // 1125
		{
			int nHitBoxes; // 1127
			{
				int hb; // 1128
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 207
				CUtlDict<CHitBoxSet, int>::operator[](
						int i);  // 1130
				CUtlMemory<CHitBox, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::operator[](
						int i);  // 1130
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 539
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 92
			CUtlMap<char const::operator[](
					IndexType_t i);  // 180
			CUtlDict<CHitBoxSet, int>::Element(
				int i);  // 207
			CUtlDict<CHitBoxSet, int>::operator[](
					int i);  // 1127
			CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Count(); // 1127
		}
	}
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1124
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <04CBE85B> modellib/rendermesh.cpp:1137
// variables: 12
// function calls: 34
void SaveUtlDict<CAttachment>(const CUtlDict<CAttachment, int>* pDict, const char* pName, CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKeyValues; // 1139
	KeyValues3* pDictList; // 1140
	{
		int i; // 1143
		{
			KeyValues3* pDictElementKV; // 1145
			KeyValues3* pValue; // 1148
			const CAttachment& valueType; // 1150
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 93
			CUtlMap<char const::operator[](
					IndexType_t i);  // 186
			CUtlDict<CAttachment, int>::Element(
				int i);  // 1150
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 250
			KeyValues3::SetToNull(); // 213
			CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>(
									const CRenderBufferBinding* const& pClassInstance,
									KeyValues3* pSaveToValue);  // 172
			CUtlStack<KeyValues3::Count(); // 199
			CKV3TransferSaveContext::SaveClassPointer<const CAttachment>(
								const CAttachment* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 1151
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 95
			CUtlMap<char const::Key(
				IndexType_t i);  // 201
			CUtlDict<CAttachment, int>::GetElementName(
					int i);  // 1147
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1147
			{
				const uint32  m; // 80
				uint32 h; // 81
				uint32 k; // 82
				const int  r; // 83
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1148
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 1329
		CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::Node_t, this); // 351
		CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 384
		CUtlDict<CAttachment, int>::First(); // 1143
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 390
		CUtlDict<CAttachment, int>::Next(
			int i);  // 1143
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1140
	CKV3TransferSaveContext::TargetObject(); // 1139
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CAttachment, int>::Count(); // 1142
} /* size: 677, variables: 2, inline expansions: 9 (388 bytes) */

// <04CBDD79> modellib/rendermesh.cpp:1137
// variables: 12
// function calls: 34
void SaveUtlDict<CHitBoxSet>(const CUtlDict<CHitBoxSet, int>* pDict, const char* pName, CKV3TransferSaveContext* pContext)
{
	KeyValues3* pTargetKeyValues; // 1139
	KeyValues3* pDictList; // 1140
	{
		int i; // 1143
		{
			KeyValues3* pDictElementKV; // 1145
			KeyValues3* pValue; // 1148
			const CHitBoxSet& valueType; // 1150
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 93
			CUtlMap<char const::operator[](
					IndexType_t i);  // 186
			CUtlDict<CHitBoxSet, int>::Element(
				int i);  // 1150
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 250
			KeyValues3::SetToNull(); // 213
			CKV3TransferSaveContext::SaveClassPointer<const CRenderBufferBinding>(
									const CRenderBufferBinding* const& pClassInstance,
									KeyValues3* pSaveToValue);  // 172
			CUtlStack<KeyValues3::Count(); // 199
			CKV3TransferSaveContext::SaveClassPointer<const CHitBoxSet>(
								const CHitBoxSet* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 1151
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 545
			CUtlRBTree<CUtlMap<char const::Element(
				int i);  // 95
			CUtlMap<char const::Key(
				IndexType_t i);  // 201
			CUtlDict<CHitBoxSet, int>::GetElementName(
					int i);  // 1147
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1147
			{
				const uint32  m; // 80
				uint32 h; // 81
				uint32 k; // 82
				const int  r; // 83
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1148
		}
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 1329
		CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>::Node_t, i this); // 351
		CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 384
		CUtlDict<CHitBoxSet, int>::First(); // 1143
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 390
		CUtlDict<CHitBoxSet, int>::Next(
			int i);  // 1143
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1140
	CKV3TransferSaveContext::TargetObject(); // 1139
	CUtlRBTree<CUtlMap<char const::Count()(char const* const&, char const* const&)>::Node_t, i this); // 177
	CUtlMap<char const::Count()(char const* const&, char const* const&)>* this); // 232
	CUtlDict<CHitBoxSet, int>::Count(); // 1142
} /* size: 677, variables: 2, inline expansions: 9 (388 bytes) */

// <04CC4F0A> modellib/rendermesh.cpp:1155
// function calls: 13
void CRenderMesh::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 1163
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3TransferContextBase::FindInterface<IKV3TransferInterface_ResourceSave>(); // 49
	{
	}
	SaveValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferSaveContext* pContext,
									KeyValues3* pSaveToValue,
									const CStrongHandle<InfoForResourceTypeCMorphSetData>& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
										const CStrongHandle<InfoForResourceTypeCMorphSetData>& sourceValue,
										KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
										CKV3MemberName memberNameAndHash,
										const CStrongHandle<InfoForResourceTypeCMorphSetData>& sourceValue);  // 1163
} /* size: 0, inline expansions: 13 (679 bytes) */

// <04CBCF07> modellib/rendermesh.cpp:1167
// variables: 15
// function calls: 41
void LoadUtlDict<CAttachment>(CUtlDict<CAttachment, int>* pDict, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 15548
	const KeyValues3* pSourceKeyValues; // 1169
	const KeyValues3* pDictList; // 1170
	int nElements; // 1176
	{
		int i; // 1177
		{
			const KeyValues3* pDictElementKV; // 1179
			const char* pKeyName; // 1181
			const KeyValues3* pValue; // 1182
			{
				int nIndex; // 1185
				CAttachment& valueType; // 1186
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CAttachment>(
								CAttachment* pClassInstance,
								const KeyValues3* pNestedValue);  // 1187
				Node_t::Node_t(
					const KeyType_t& k);  // 213
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 611
				CUtlRBTree<CUtlMap<char const::LeftChild(
						int i);  // 1667
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 1665
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1665
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1669
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 617
				CUtlRBTree<CUtlMap<char const::RightChild(
						int i);  // 1677
				CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
							const Node_t& insert,
							bool bCheckForDuplicates,
							int& parent,
							bool& leftchild,
							bool& isDuplicate);  // 1693
				{
					int newNode; // 1709
					{
					}
				}
				{
					int newNode; // 1696
				}
				CUtlRBTree<CUtlMap<char const::Insert(
					const Node_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 213
				CUtlString::~CUtlString(); // 321
				CUtlString::~CUtlString(); // 321
				CAttachment::~CAttachment(); // 402
				Node_t::~Node_t(); // 213
				CUtlMap<char const::Insert(
					const KeyType_t& key,
					ERBTreeInsertBehavior eInsertBehavior);  // 349
				CUtlDict<CAttachment, int>::Insert(
					const char* pName,
					ERBTreeInsertBehavior eInsertBehavior);  // 1185
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CAttachment, int>::Element(
					int i);  // 1186
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
			}
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1181
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 1182
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1182
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1170
	CKV3TransferLoadContext::SourceObject(); // 1169
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1170
} /* size: 917, variables: 4, inline expansions: 10 (594 bytes) */

// <04CBC136> modellib/rendermesh.cpp:1167
// variables: 13
// function calls: 48
void LoadUtlDict<CHitBoxSet>(CUtlDict<CHitBoxSet, int>* pDict, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 15548
	const KeyValues3* pSourceKeyValues; // 1169
	const KeyValues3* pDictList; // 1170
	int nElements; // 1176
	{
		int i; // 1177
		{
			const KeyValues3* pDictElementKV; // 1179
			const char* pKeyName; // 1181
			const KeyValues3* pValue; // 1182
			{
				int nIndex; // 1185
				CHitBoxSet& valueType; // 1186
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 1186
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CHitBoxSet>(
								CHitBoxSet* pClassInstance,
								const KeyValues3* pNestedValue);  // 1187
				CUtlString::CUtlString(); // 657
				CUtlMemory<CHitBox, int>::ValidateGrowSize(); // 475
				CUtlMemory<CHitBox, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVector(); // 657
				CUtlString::CUtlString(); // 657
				CHitBoxSet::CHitBoxSet(); // 405
				Node_t::Node_t(
					const KeyType_t& k);  // 213
				CUtlString::~CUtlString(); // 489
				CUtlMemory<CHitBox, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CHitBox, int>::Purge(); // 903
				CUtlMemory<CHitBox, int>::Purge(); // 1799
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Purge(); // 560
				ValidateAlignment<CHitBox>(void); // 508
				CUtlMemory<CHitBox, int>::Purge(); // 510
				CUtlMemory<CHitBox, int>::~CUtlMemory(); // 562
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVectorBase(); // 410
				CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVector(); // 489
				CUtlString::~CUtlString(); // 489
				CHitBoxSet::~CHitBoxSet(); // 402
				Node_t::~Node_t(); // 213
				CUtlMap<char const::Insert(
					const KeyType_t& key,
					ERBTreeInsertBehavior eInsertBehavior);  // 349
				CUtlDict<CHitBoxSet, int>::Insert(
					const char* pName,
					ERBTreeInsertBehavior eInsertBehavior);  // 1185
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
			}
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1181
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 1182
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1182
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1170
	CKV3TransferLoadContext::SourceObject(); // 1169
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1170
} /* size: 728, variables: 4, inline expansions: 10 (508 bytes) */

// <02001D75> modellib/rendermesh.cpp:1167
// variables: 15
// function calls: 41
void LoadUtlDict<CAttachment>(CUtlDict<CAttachment, int>* pDict, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 23071
	const KeyValues3* pSourceKeyValues; // 1169
	const KeyValues3* pDictList; // 1170
	int nElements; // 1176
	{
		int i; // 1177
		{
			const KeyValues3* pDictElementKV; // 1179
			const char* pKeyName; // 1181
			const KeyValues3* pValue; // 1182
			{
				int nIndex; // 1185
				CAttachment& valueType; // 1186
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CAttachment>(
								CAttachment* pClassInstance,
								const KeyValues3* pNestedValue);  // 1187
				Node_t::Node_t(
					const KeyType_t& k);  // 213
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 611
				CUtlRBTree<CUtlMap<char const::LeftChild(
						int i);  // 1667
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 1665
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1665
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1669
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 617
				CUtlRBTree<CUtlMap<char const::RightChild(
						int i);  // 1677
				CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
							const Node_t& insert,
							bool bCheckForDuplicates,
							int& parent,
							bool& leftchild,
							bool& isDuplicate);  // 1693
				{
					int newNode; // 1709
					{
					}
				}
				{
					int newNode; // 1696
				}
				CUtlRBTree<CUtlMap<char const::Insert(
					const Node_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 213
				CUtlString::~CUtlString(); // 321
				CUtlString::~CUtlString(); // 321
				CAttachment::~CAttachment(); // 402
				Node_t::~Node_t(); // 213
				CUtlMap<char const::Insert(
					const KeyType_t& key,
					ERBTreeInsertBehavior eInsertBehavior);  // 349
				CUtlDict<CAttachment, int>::Insert(
					const char* pName,
					ERBTreeInsertBehavior eInsertBehavior);  // 1185
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CAttachment, int>::Element(
					int i);  // 1186
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
			}
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1181
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 1182
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1182
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1170
	CKV3TransferLoadContext::SourceObject(); // 1169
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1170
} /* size: 0, variables: 4, inline expansions: 10 (0 bytes) */

// <02000FA4> modellib/rendermesh.cpp:1167
// variables: 13
// function calls: 48
void LoadUtlDict<CHitBoxSet>(CUtlDict<CHitBoxSet, int>* pDict, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 23071
	const KeyValues3* pSourceKeyValues; // 1169
	const KeyValues3* pDictList; // 1170
	int nElements; // 1176
	{
		int i; // 1177
		{
			const KeyValues3* pDictElementKV; // 1179
			const char* pKeyName; // 1181
			const KeyValues3* pValue; // 1182
			{
				int nIndex; // 1185
				CHitBoxSet& valueType; // 1186
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 1186
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CHitBoxSet>(
								CHitBoxSet* pClassInstance,
								const KeyValues3* pNestedValue);  // 1187
				CUtlString::CUtlString(); // 657
				CUtlMemory<CHitBox, int>::ValidateGrowSize(); // 475
				CUtlMemory<CHitBox, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVector(); // 657
				CUtlString::CUtlString(); // 657
				CHitBoxSet::CHitBoxSet(); // 405
				Node_t::Node_t(
					const KeyType_t& k);  // 213
				CUtlString::~CUtlString(); // 489
				CUtlMemory<CHitBox, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CHitBox, int>::Purge(); // 903
				CUtlMemory<CHitBox, int>::Purge(); // 1799
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Purge(); // 560
				ValidateAlignment<CHitBox>(void); // 508
				CUtlMemory<CHitBox, int>::Purge(); // 510
				CUtlMemory<CHitBox, int>::~CUtlMemory(); // 562
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVectorBase(); // 410
				CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVector(); // 489
				CUtlString::~CUtlString(); // 489
				CHitBoxSet::~CHitBoxSet(); // 402
				Node_t::~Node_t(); // 213
				CUtlMap<char const::Insert(
					const KeyType_t& key,
					ERBTreeInsertBehavior eInsertBehavior);  // 349
				CUtlDict<CHitBoxSet, int>::Insert(
					const char* pName,
					ERBTreeInsertBehavior eInsertBehavior);  // 1185
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
			}
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1181
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 1182
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1182
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1170
	CKV3TransferLoadContext::SourceObject(); // 1169
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1170
} /* size: 0, variables: 4, inline expansions: 10 (0 bytes) */

// <00BDFB48> modellib/rendermesh.cpp:1167
// variables: 15
// function calls: 41
void LoadUtlDict<CAttachment>(CUtlDict<CAttachment, int>* pDict, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 30050
	const KeyValues3* pSourceKeyValues; // 1169
	const KeyValues3* pDictList; // 1170
	int nElements; // 1176
	{
		int i; // 1177
		{
			const KeyValues3* pDictElementKV; // 1179
			const char* pKeyName; // 1181
			const KeyValues3* pValue; // 1182
			{
				int nIndex; // 1185
				CAttachment& valueType; // 1186
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CAttachment>(
								CAttachment* pClassInstance,
								const KeyValues3* pNestedValue);  // 1187
				Node_t::Node_t(
					const KeyType_t& k);  // 213
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 611
				CUtlRBTree<CUtlMap<char const::LeftChild(
						int i);  // 1667
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 1665
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1665
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1669
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 617
				CUtlRBTree<CUtlMap<char const::RightChild(
						int i);  // 1677
				CUtlRBTree<CUtlMap<char const::FindInsertionPosition(
							const Node_t& insert,
							bool bCheckForDuplicates,
							int& parent,
							bool& leftchild,
							bool& isDuplicate);  // 1693
				{
					int newNode; // 1709
					{
					}
				}
				{
					int newNode; // 1696
				}
				CUtlRBTree<CUtlMap<char const::Insert(
					const Node_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 213
				CUtlString::~CUtlString(); // 321
				CUtlString::~CUtlString(); // 321
				CAttachment::~CAttachment(); // 402
				Node_t::~Node_t(); // 213
				CUtlMap<char const::Insert(
					const KeyType_t& key,
					ERBTreeInsertBehavior eInsertBehavior);  // 349
				CUtlDict<CAttachment, int>::Insert(
					const char* pName,
					ERBTreeInsertBehavior eInsertBehavior);  // 1185
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CAttachment, int>::Element(
					int i);  // 1186
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
			}
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1181
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 1182
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1182
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1170
	CKV3TransferLoadContext::SourceObject(); // 1169
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1170
} /* size: 917, variables: 4, inline expansions: 10 (594 bytes) */

// <00BDED77> modellib/rendermesh.cpp:1167
// variables: 13
// function calls: 48
void LoadUtlDict<CHitBoxSet>(CUtlDict<CHitBoxSet, int>* pDict, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 30050
	const KeyValues3* pSourceKeyValues; // 1169
	const KeyValues3* pDictList; // 1170
	int nElements; // 1176
	{
		int i; // 1177
		{
			const KeyValues3* pDictElementKV; // 1179
			const char* pKeyName; // 1181
			const KeyValues3* pValue; // 1182
			{
				int nIndex; // 1185
				CHitBoxSet& valueType; // 1186
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
						int i);  // 539
				CUtlRBTree<CUtlMap<char const::Element(
					int i);  // 92
				CUtlMap<char const::operator[](
						IndexType_t i);  // 180
				CUtlDict<CHitBoxSet, int>::Element(
					int i);  // 1186
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CHitBoxSet>(
								CHitBoxSet* pClassInstance,
								const KeyValues3* pNestedValue);  // 1187
				CUtlString::CUtlString(); // 657
				CUtlMemory<CHitBox, int>::ValidateGrowSize(); // 475
				CUtlMemory<CHitBox, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::CUtlVector(); // 657
				CUtlString::CUtlString(); // 657
				CHitBoxSet::CHitBoxSet(); // 405
				Node_t::Node_t(
					const KeyType_t& k);  // 213
				CUtlString::~CUtlString(); // 489
				CUtlMemory<CHitBox, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CHitBox, int>::Purge(); // 903
				CUtlMemory<CHitBox, int>::Purge(); // 1799
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::Purge(); // 560
				ValidateAlignment<CHitBox>(void); // 508
				CUtlMemory<CHitBox, int>::Purge(); // 510
				CUtlMemory<CHitBox, int>::~CUtlMemory(); // 562
				CUtlVectorBase<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVectorBase(); // 410
				CUtlVector<CHitBox, CUtlMemory<CHitBox, int> >::~CUtlVector(); // 489
				CUtlString::~CUtlString(); // 489
				CHitBoxSet::~CHitBoxSet(); // 402
				Node_t::~Node_t(); // 213
				CUtlMap<char const::Insert(
					const KeyType_t& key,
					ERBTreeInsertBehavior eInsertBehavior);  // 349
				CUtlDict<CHitBoxSet, int>::Insert(
					const char* pName,
					ERBTreeInsertBehavior eInsertBehavior);  // 1185
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
			}
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 1181
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 1182
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 1182
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 1170
	CKV3TransferLoadContext::SourceObject(); // 1169
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 1170
} /* size: 728, variables: 4, inline expansions: 10 (508 bytes) */

// <04CC4963> modellib/rendermesh.cpp:1202
// variables: 2
// function calls: 15
void CRenderMesh::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	bool bLoadMorphs; // 1210
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 1226
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CKV3TransferContextBase::FindInterface<IKV3TransferInterface_ResourceLoad>(); // 58
	{
	}
	LoadValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferLoadContext* pContext,
									const KeyValues3* pLoadFromValue,
									CStrongHandle<InfoForResourceTypeCMorphSetData>& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
										CStrongHandle<InfoForResourceTypeCMorphSetData>& destValue,
										const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CKV3TransferContextBase::FindInterface<IKV3TransferInterface_ResourceLoad>(); // 58
		{
		}
		LoadValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferLoadContext* pContext,
										const KeyValues3* pLoadFromValue,
										CStrongHandle<InfoForResourceTypeCMorphSetData>& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
											CStrongHandle<InfoForResourceTypeCMorphSetData>& destValue,
											const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
										CKV3MemberName memberNameAndHash,
										CStrongHandle<InfoForResourceTypeCMorphSetData>& destValue,
										uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
										CKV3MemberName memberNameAndHash,
										CStrongHandle<InfoForResourceTypeCMorphSetData>& destValue,
										uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CStrongHandle<InfoForResourceTypeCMorphSetData> >(
										CKV3MemberName memberNameAndHash,
										CStrongHandle<InfoForResourceTypeCMorphSetData>& destValue);  // 1226
} /* size: 0, variables: 1, inline expansions: 12 (923 bytes) */

// <04CC48C7> modellib/rendermesh.cpp:1230
// function call: 1
void CRenderMesh::SetName(const char* pInName)
{
	CUtlString::operator=(
			const char* src);  // 1232
} /* size: 16, inline expansions: 1 (5 bytes) */

// <04CC4868> modellib/rendermesh.cpp:1235
// function call: 1
void CRenderMesh::GetName()
{
	CUtlString::Get(); // 1237
} /* size: 26, inline expansions: 1 (21 bytes) */

// <04CC3D04> modellib/rendermesh.cpp:1240
// variables: 14
// function calls: 40
void CRenderMesh::CalculateNumTriangles(int* pOutVertexCount, int* pOutTriangleCount, int* pOutDrawCallCount)
{
	int nNumSceneObjects; // 1257
	const char   __FUNCTION__; // 15788
	{
		int iSceneObject; // 1258
		{
			CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int> > vertexBuffersCounted; // 1260
			int nNumDrawCalls; // 1262
			{
				int iDraw; // 1263
				{
					const CMaterialDrawDescriptor* pDraw; // 1266
					{
						bool bAllVertexBuffersCounted; // 1280
						const int  nNumVertexBuffers; // 1281
						{
							int i; // 1282
							{
								bool bDidInsert; // 1284
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::operator[](
										int i);  // 706
								CUtlKeyValuePair<long long unsigned int, empty_t>::CUtlKeyValuePair<long long unsigned int>(
													const long long unsigned int& k);  // 1514
								Construct<CUtlKeyValuePair<long long unsigned int, empty_t>, long long unsigned int&>(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory); // 706
								DoInsert<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
												long long unsigned int k,
												unsigned int h,
												bool* pDidInsert);  // 695
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Base(); // 650
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Count(); // 651
								IdealIndex(uint32_if32BitStorage h,
										uint32 m);  // 653
								CUtlHashtableEntry<long long unsigned int, empty_t>::IdealIndex(
										uint32 slotmask);  // 656
								CUtlHashtableEntry<long long unsigned int, empty_t>::IdealIndex(
										uint32 slotmask);  // 667
								DoLookup<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFuncto this,
												long long unsigned int x,
												unsigned int h,
												handle_t* pPreviousInChain);  // 697
								DoInsert<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
												long long unsigned int k,
												unsigned int h,
												bool* pDidInsert);  // 243
								Mix64HashFunctor::operator(
										uint64 s);  // 243
								FindOrInsertDefault(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
											KeyArg_t k,
											bool* pDidInsert);  // 1285
							}
						}
						CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 1281
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1298
					}
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 1266
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 298
					CSceneObjectData::GetDrawCall(
							int nDraw);  // 1266
				}
			}
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 178
			CUtlHashtable(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
					int minimumSize);  // 1260
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 296
			CSceneObjectData::GetNumDrawCalls(); // 1262
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 1262
			{
				entry_t* table; // 896
				CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Base(); // 896
				{
					int i; // 897
					CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Count(); // 897
					CUtlHashtableEntry<long long unsigned int, empty_t>::IsValid(); // 899
					CUtlHashtableEntry<long long unsigned int, empty_t>::MarkInvalid(); // 901
					Destruct<CUtlKeyValuePair<long long unsigned int, empty_t> >(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory); // 902
				}
			}
			RemoveAll(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 188
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Purge(); // 903
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Purge(); // 510
			ValidateAlignment<CUtlHashtableEntry<long long unsigned int, empty_t> >(void); // 508
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::~CUtlMemory(); // 188
			~CUtlHashtable(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 1304
		}
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 1257
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <02008B72> modellib/rendermesh.cpp:1240
// variables: 14
// function calls: 40
void CRenderMesh::CalculateNumTriangles(int* pOutVertexCount, int* pOutTriangleCount, int* pOutDrawCallCount)
{
	int nNumSceneObjects; // 1257
	const char   __FUNCTION__; // 23311
	{
		int iSceneObject; // 1258
		{
			CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int> > vertexBuffersCounted; // 1260
			int nNumDrawCalls; // 1262
			{
				int iDraw; // 1263
				{
					const CMaterialDrawDescriptor* pDraw; // 1266
					{
						bool bAllVertexBuffersCounted; // 1280
						const int  nNumVertexBuffers; // 1281
						{
							int i; // 1282
							{
								bool bDidInsert; // 1284
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::operator[](
										int i);  // 706
								CUtlKeyValuePair<long long unsigned int, empty_t>::CUtlKeyValuePair<long long unsigned int>(
													const long long unsigned int& k);  // 1514
								Construct<CUtlKeyValuePair<long long unsigned int, empty_t>, long long unsigned int&>(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory); // 706
								DoInsert<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
												long long unsigned int k,
												unsigned int h,
												bool* pDidInsert);  // 695
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Base(); // 650
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Count(); // 651
								IdealIndex(uint32_if32BitStorage h,
										uint32 m);  // 653
								CUtlHashtableEntry<long long unsigned int, empty_t>::IdealIndex(
										uint32 slotmask);  // 656
								CUtlHashtableEntry<long long unsigned int, empty_t>::IdealIndex(
										uint32 slotmask);  // 667
								DoLookup<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFuncto this,
												long long unsigned int x,
												unsigned int h,
												handle_t* pPreviousInChain);  // 697
								DoInsert<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
												long long unsigned int k,
												unsigned int h,
												bool* pDidInsert);  // 243
								Mix64HashFunctor::operator(
										uint64 s);  // 243
								FindOrInsertDefault(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
											KeyArg_t k,
											bool* pDidInsert);  // 1285
							}
						}
						CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 1281
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1298
					}
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 1266
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 298
					CSceneObjectData::GetDrawCall(
							int nDraw);  // 1266
				}
			}
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 178
			CUtlHashtable(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
					int minimumSize);  // 1260
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 296
			CSceneObjectData::GetNumDrawCalls(); // 1262
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 1262
			{
				entry_t* table; // 896
				CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Base(); // 896
				{
					int i; // 897
					CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Count(); // 897
					CUtlHashtableEntry<long long unsigned int, empty_t>::IsValid(); // 899
					CUtlHashtableEntry<long long unsigned int, empty_t>::MarkInvalid(); // 901
					Destruct<CUtlKeyValuePair<long long unsigned int, empty_t> >(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory); // 902
				}
			}
			RemoveAll(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 188
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Purge(); // 903
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Purge(); // 510
			ValidateAlignment<CUtlHashtableEntry<long long unsigned int, empty_t> >(void); // 508
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::~CUtlMemory(); // 188
			~CUtlHashtable(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 1304
		}
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 1257
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <00BE6945> modellib/rendermesh.cpp:1240
// variables: 14
// function calls: 40
void CRenderMesh::CalculateNumTriangles(int* pOutVertexCount, int* pOutTriangleCount, int* pOutDrawCallCount)
{
	int nNumSceneObjects; // 1257
	const char   __FUNCTION__; // 30290
	{
		int iSceneObject; // 1258
		{
			CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int> > vertexBuffersCounted; // 1260
			int nNumDrawCalls; // 1262
			{
				int iDraw; // 1263
				{
					const CMaterialDrawDescriptor* pDraw; // 1266
					{
						bool bAllVertexBuffersCounted; // 1280
						const int  nNumVertexBuffers; // 1281
						{
							int i; // 1282
							{
								bool bDidInsert; // 1284
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::operator[](
										int i);  // 706
								CUtlKeyValuePair<long long unsigned int, empty_t>::CUtlKeyValuePair<long long unsigned int>(
													const long long unsigned int& k);  // 1514
								Construct<CUtlKeyValuePair<long long unsigned int, empty_t>, long long unsigned int&>(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory); // 706
								DoInsert<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
												long long unsigned int k,
												unsigned int h,
												bool* pDidInsert);  // 695
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Base(); // 650
								CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Count(); // 651
								IdealIndex(uint32_if32BitStorage h,
										uint32 m);  // 653
								CUtlHashtableEntry<long long unsigned int, empty_t>::IdealIndex(
										uint32 slotmask);  // 656
								CUtlHashtableEntry<long long unsigned int, empty_t>::IdealIndex(
										uint32 slotmask);  // 667
								DoLookup<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFuncto this,
												long long unsigned int x,
												unsigned int h,
												handle_t* pPreviousInChain);  // 697
								DoInsert<long long unsigned int>(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
												long long unsigned int k,
												unsigned int h,
												bool* pDidInsert);  // 243
								Mix64HashFunctor::operator(
										uint64 s);  // 243
								FindOrInsertDefault(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
											KeyArg_t k,
											bool* pDidInsert);  // 1285
							}
						}
						CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::Count(); // 1281
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1298
					}
					CUtlMemory<CSceneObjectData, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
							int i);  // 1266
					CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
							int i);  // 298
					CSceneObjectData::GetDrawCall(
							int nDraw);  // 1266
				}
			}
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 178
			Init(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 178
			CUtlHashtable(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this,
					int minimumSize);  // 1260
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 296
			CSceneObjectData::GetNumDrawCalls(); // 1262
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 1262
			{
				entry_t* table; // 896
				CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Base(); // 896
				{
					int i; // 897
					CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Count(); // 897
					CUtlHashtableEntry<long long unsigned int, empty_t>::IsValid(); // 899
					CUtlHashtableEntry<long long unsigned int, empty_t>::MarkInvalid(); // 901
					Destruct<CUtlKeyValuePair<long long unsigned int, empty_t> >(CUtlKeyValuePair<long long unsigned int, empty_t>* pMemory); // 902
				}
			}
			RemoveAll(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 188
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Purge(); // 903
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::Purge(); // 510
			ValidateAlignment<CUtlHashtableEntry<long long unsigned int, empty_t> >(void); // 508
			CUtlMemory<CUtlHashtableEntry<long long unsigned int, empty_t>, int>::~CUtlMemory(); // 188
			~CUtlHashtable(const CUtlHashtable<long long unsigned int, empty_t, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long this); // 1304
		}
	}
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 1257
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <04CC3A24> modellib/rendermesh.cpp:1308
// variables: 8
// function calls: 11
void CRenderMesh::GenerateMeshBLAS()
{
	{
		CSceneObjectData& sceneObjectData; // 1314
		CUtlVectorFixedGrowable<CSceneObjectData, 1>& __for_range; // 54548
		iterator __for_begin; // 65298
		iterator __for_end; // 65298
		{
			CMaterialDrawDescriptor& drawCall; // 1316
			CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& __for_range; // 54554
			iterator __for_begin; // 36669
			iterator __for_end; // 36669
			CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 102
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::begin(); // 1316
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 104
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::end(); // 1316
			CMaterialDrawDescriptor::SetBLAS(
				RenderBLASHandle_t hBLAS);  // 1321
		}
		CUtlMemory<CSceneObjectData, int>::Base(); // 112
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Base(); // 102
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::begin(); // 1314
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 104
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::end(); // 1314
	}
} /* size: 0 */

// <02008892> modellib/rendermesh.cpp:1308
// variables: 8
// function calls: 11
void CRenderMesh::GenerateMeshBLAS()
{
	{
		CSceneObjectData& sceneObjectData; // 1314
		CUtlVectorFixedGrowable<CSceneObjectData, 1>& __for_range; // 62071
		iterator __for_begin; // 7285
		iterator __for_end; // 7285
		{
			CMaterialDrawDescriptor& drawCall; // 1316
			CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& __for_range; // 62077
			iterator __for_begin; // 44192
			iterator __for_end; // 44192
			CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 102
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::begin(); // 1316
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 104
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::end(); // 1316
			CMaterialDrawDescriptor::SetBLAS(
				RenderBLASHandle_t hBLAS);  // 1321
		}
		CUtlMemory<CSceneObjectData, int>::Base(); // 112
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Base(); // 102
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::begin(); // 1314
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 104
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::end(); // 1314
	}
} /* size: 0 */

// <00BE6665> modellib/rendermesh.cpp:1308
// variables: 8
// function calls: 11
void CRenderMesh::GenerateMeshBLAS()
{
	{
		CSceneObjectData& sceneObjectData; // 1314
		CUtlVectorFixedGrowable<CSceneObjectData, 1>& __for_range; // 3514
		iterator __for_begin; // 14264
		iterator __for_end; // 14264
		{
			CMaterialDrawDescriptor& drawCall; // 1316
			CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& __for_range; // 3520
			iterator __for_begin; // 51171
			iterator __for_end; // 51171
			CUtlMemory<CMaterialDrawDescriptor, int>::Base(); // 112
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Base(); // 102
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::begin(); // 1316
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 104
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::end(); // 1316
			CMaterialDrawDescriptor::SetBLAS(
				RenderBLASHandle_t hBLAS);  // 1321
		}
		CUtlMemory<CSceneObjectData, int>::Base(); // 112
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Base(); // 102
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::begin(); // 1314
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::Count(); // 104
		CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::end(); // 1314
	}
} /* size: 138 */

// <04CC2F3F> modellib/rendermesh.cpp:1326
// variables: 4
// function calls: 42
void TraceDataForDraw_t::GetUnRemappedVerticesAndIndices(CUtlVector<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >& outVertices, CUtlVector<int, CUtlMemory<int, int> >& outIndices)
{
	{
		int nIndexCount; // 1330
		{
			int i; // 1334
			{
				int idx; // 1336
				int idxRemapped; // 1337
				Vector4D::operator=(
						const Vector4D& vOther);  // 536
				Vector::operator=(
						const Vector& vOther);  // 536
				Vector::operator=(
						const Vector& vOther);  // 536
				Vector4D::operator=(
						const Vector4D& vOther);  // 536
				Vector2D::operator=(
						const Vector2D& vOther);  // 536
				Vector4D::operator=(
						const Vector4D& vOther);  // 536
				Vector2D::operator=(
						const Vector2D& vOther);  // 536
				Vector4D::operator=(
						const Vector4D& vOther);  // 536
				TraceVertex_t::operator=(
						const TraceVertex_t  &);  // 1338
				CUtlMemory<TraceVertex_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::operator[](
						int i);  // 1338
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1339
			}
		}
		CUtlMemory<TraceVertex_t, int>::AllocSize(); // 1867
		CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::AllocSize(); // 1333
		CUtlMemory<TraceVertex_t, int>::Base(); // 112
		CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::Base(); // 1333
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1333
	}
	CUtlMemory<TraceVertex_t, int>::Base(); // 112
	CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::Base(); // 102
	CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::begin(); // 1344
	Vector::operator=(
			const Vector& vOther);  // 536
	Vector4D::operator=(
			const Vector4D& vOther);  // 536
	Vector::operator=(
			const Vector& vOther);  // 536
	Vector4D::operator=(
			const Vector4D& vOther);  // 536
	Vector2D::operator=(
			const Vector2D& vOther);  // 536
	Vector4D::operator=(
			const Vector4D& vOther);  // 536
	Vector2D::operator=(
			const Vector2D& vOther);  // 536
	Vector4D::operator=(
			const Vector4D& vOther);  // 536
	TraceVertex_t::operator=(
			const TraceVertex_t  &);  // 209
	UtlTraitsCopyRange<TraceVertex_t>(const TraceVertex_t* pFrom,
						const TraceVertex_t* pFromEnd,
						TraceVertex_t* pTo);  // 200
	UtlTraitsCopyRange<TraceVertex_t>(const TraceVertex_t* pFrom,
						const TraceVertex_t* pFromEnd,
						TraceVertex_t* pTo);  // 1344
	CUtlVectorBase<TraceVertex_t, CUtlMemory<TraceVertex_t, int> >::CopyArray(
			const TraceVertex_t* pArray,
			int size);  // 1344
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 102
	CUtlVectorBase<int, CUtlMemory<int, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<CRenderBufferBinding>(const CRenderBufferBinding* pFrom,
						const CRenderBufferBinding* pFromEnd,
						CRenderBufferBinding* pTo);  // 173
	UtlTraitsCopyRange<int>(const int* pFrom,
				const int* pFromEnd,
				int* pTo);  // 1344
	CUtlVectorBase<int, CUtlMemory<int, int> >::CopyArray(
			const int* pArray,
			int size);  // 1345
} /* size: 0, inline expansions: 23 (0 bytes) */

// <04CC2898> modellib/rendermesh.cpp:1349
// variables: 4
// function calls: 27
void BufferInfo_t::InitFromVBIBBlock(const RenderMeshBufferData_t* pSrcBuffer)
{
	int nNumFields; // 1356
	{
		int iField; // 1358
		{
			RenderInputLayoutField_t& bufferField; // 1360
			const RenderMeshInputLayoutField_t& srcField; // 1361
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshInputLayoutField_t>::GetPtr(); // 379
			CResourceArray<RenderMeshInputLayoutField_t>::operator[](
					int nIndex);  // 1361
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 1360
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 1365
		}
	}
	ResolveOffset(const int32* pOffset); // 304
	CResourceArrayBase::GetRawPtr(); // 426
	CResourceArray<unsigned char>::Base(); // 1353
	CResourceArrayBase::Count(); // 1354
	CResourceArrayBase::Count(); // 1356
	CUtlMemory<RenderInputLayoutField_t, int>::NumAllocated(); // 782
	CUtlMemory<RenderInputLayoutField_t, int>::IsGrowable(); // 823
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<RenderInputLayoutField_t, int>::Grow(
		int num);  // 806
	CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 368
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::SetCount(
		int count);  // 1357
} /* size: 0, variables: 1, inline expansions: 19 (0 bytes) */

// <04CC27B0> modellib/rendermesh.cpp:1388
// variables: 2
// function call: 1
void BufferInfo_t::UnencodeVertexAndIndexData(bool bIndexData, uint8 *& pScratchMemory)
{
	uint dataSize; // 1390
	{
		const uint8* pDecompressedData; // 1393
		AlignValue<unsigned int>(unsigned int val,
					uintp alignment);  // 1394
	}
} /* size: 0, variables: 1 */

// <04CC1F7C> modellib/rendermesh.cpp:1410
// variables: 23
// function calls: 26
void RuntimeBuffersInfo_t::InitFromVBIBBlockHeader(const VBIBBlockHeader_t* pHeader)
{
	int nNumVB; // 1412
	int nNumIB; // 1413
	uint nAlignedDataSize; // 1418
	bool bHasEncodedBuffers; // 1419
	const char   __FUNCTION__; // 15837
	{
		int iVB; // 1421
		{
			BufferInfo_t& destBuffer; // 1423
			const RenderMeshBufferData_t& srcBuffer; // 1424
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
					int i);  // 1423
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 379
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1424
			AlignValue<int>(int val,
					uintp alignment);  // 1427
		}
	}
	{
		int iIB; // 1431
		{
			BufferInfo_t& destBuffer; // 1433
			const RenderMeshBufferData_t& srcBuffer; // 1434
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
					int i);  // 1433
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 379
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1434
			AlignValue<int>(int val,
					uintp alignment);  // 1437
		}
	}
	{
		uint8* pScratchDataPtr; // 1444
		{
			BufferInfo_t& buffer; // 1446
			CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 46994
			iterator __for_begin; // 52978
			iterator __for_end; // 52978
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1449
			}
			Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
			end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1446
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
			Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
			begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1446
		}
		{
			BufferInfo_t& buffer; // 1452
			CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 46994
			iterator __for_begin; // 52978
			iterator __for_end; // 52978
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1455
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
			Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
			begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1452
			Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
			end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1452
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1458
		}
	}
	CResourceArrayBase::Count(); // 1413
	CResourceArrayBase::Count(); // 1412
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <02006DEA> modellib/rendermesh.cpp:1410
// variables: 23
// function calls: 26
void RuntimeBuffersInfo_t::InitFromVBIBBlockHeader(const VBIBBlockHeader_t* pHeader)
{
	int nNumVB; // 1412
	int nNumIB; // 1413
	uint nAlignedDataSize; // 1418
	bool bHasEncodedBuffers; // 1419
	const char   __FUNCTION__; // 23360
	{
		int iVB; // 1421
		{
			BufferInfo_t& destBuffer; // 1423
			const RenderMeshBufferData_t& srcBuffer; // 1424
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
					int i);  // 1423
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 379
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1424
			AlignValue<int>(int val,
					uintp alignment);  // 1427
		}
	}
	{
		int iIB; // 1431
		{
			BufferInfo_t& destBuffer; // 1433
			const RenderMeshBufferData_t& srcBuffer; // 1434
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
					int i);  // 1433
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 379
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1434
			AlignValue<int>(int val,
					uintp alignment);  // 1437
		}
	}
	{
		uint8* pScratchDataPtr; // 1444
		{
			BufferInfo_t& buffer; // 1446
			CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 54517
			iterator __for_begin; // 60501
			iterator __for_end; // 60501
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1449
			}
			Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
			end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1446
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
			Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
			begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1446
		}
		{
			BufferInfo_t& buffer; // 1452
			CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 54517
			iterator __for_begin; // 60501
			iterator __for_end; // 60501
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1455
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
			Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
			begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1452
			Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
			end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1452
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1458
		}
	}
	CResourceArrayBase::Count(); // 1413
	CResourceArrayBase::Count(); // 1412
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <00BE4BBD> modellib/rendermesh.cpp:1410
// variables: 23
// function calls: 26
void RuntimeBuffersInfo_t::InitFromVBIBBlockHeader(const VBIBBlockHeader_t* pHeader)
{
	int nNumVB; // 1412
	int nNumIB; // 1413
	uint nAlignedDataSize; // 1418
	bool bHasEncodedBuffers; // 1419
	const char   __FUNCTION__; // 30339
	{
		int iVB; // 1421
		{
			BufferInfo_t& destBuffer; // 1423
			const RenderMeshBufferData_t& srcBuffer; // 1424
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
					int i);  // 1423
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 379
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1424
			AlignValue<int>(int val,
					uintp alignment);  // 1427
		}
	}
	{
		int iIB; // 1431
		{
			BufferInfo_t& destBuffer; // 1433
			const RenderMeshBufferData_t& srcBuffer; // 1434
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this,
					int i);  // 1433
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 379
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1434
			AlignValue<int>(int val,
					uintp alignment);  // 1437
		}
	}
	{
		uint8* pScratchDataPtr; // 1444
		{
			BufferInfo_t& buffer; // 1446
			CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 61496
			iterator __for_begin; // 1944
			iterator __for_end; // 1944
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1449
			}
			Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
			end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1446
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
			Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
			begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1446
		}
		{
			BufferInfo_t& buffer; // 1452
			CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 61496
			iterator __for_begin; // 1944
			iterator __for_end; // 1944
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1455
			}
			CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
			Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
			begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1452
			Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
			end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1452
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1458
		}
	}
	CResourceArrayBase::Count(); // 1413
	CResourceArrayBase::Count(); // 1412
} /* size: 0, variables: 5, inline expansions: 2 (12 bytes) */

// <04CC1CC9> modellib/rendermesh.cpp:1462
// variables: 8
// function calls: 10
void RuntimeBuffersInfo_t::FreeScratchMemory()
{
	{
		BufferInfo_t& buffer; // 1469
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 46994
		iterator __for_begin; // 52978
		iterator __for_end; // 52978
		Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
		end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1469
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
		begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1469
	}
	{
		BufferInfo_t& buffer; // 1474
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 46994
		iterator __for_begin; // 52978
		iterator __for_end; // 52978
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
		begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1474
		Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
		end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1474
	}
} /* size: 0 */

// <02006B37> modellib/rendermesh.cpp:1462
// variables: 8
// function calls: 10
void RuntimeBuffersInfo_t::FreeScratchMemory()
{
	{
		BufferInfo_t& buffer; // 1469
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 54517
		iterator __for_begin; // 60501
		iterator __for_end; // 60501
		Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
		end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1469
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
		begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1469
	}
	{
		BufferInfo_t& buffer; // 1474
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 54517
		iterator __for_begin; // 60501
		iterator __for_end; // 60501
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
		begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1474
		Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
		end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1474
	}
} /* size: 0 */

// <00BE490A> modellib/rendermesh.cpp:1462
// variables: 8
// function calls: 10
void RuntimeBuffersInfo_t::FreeScratchMemory()
{
	{
		BufferInfo_t& buffer; // 1469
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 61496
		iterator __for_begin; // 1944
		iterator __for_end; // 1944
		Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
		end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1469
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
		begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1469
	}
	{
		BufferInfo_t& buffer; // 1474
		CUtlVectorFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1>& __for_range; // 61496
		iterator __for_begin; // 1944
		iterator __for_end; // 1944
		CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>::Base(); // 112
		Base(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 102
		begin(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1474
		Count(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t this); // 104
		end(const CUtlVectorBase<RuntimeBuffersInfo_t::BufferInfo_t, CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1, i this); // 1474
	}
} /* size: 265 */

