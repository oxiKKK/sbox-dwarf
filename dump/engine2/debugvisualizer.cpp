
//
// engine2/debugvisualizer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 13
//

// <000622B1> engine2/debugvisualizer.cpp:14
// function calls: 6
void CDebugVisualizerMgr::CDebugVisualizerMgr()
{
	IDebugVisualizerMgr::IDebugVisualizerMgr(); // 14
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::CUtlVector(); // 14
} /* size: 44, inline expansions: 6 (24 bytes) */

// <00062298> engine2/debugvisualizer.cpp:14
void CDebugVisualizerMgr::CDebugVisualizerMgr()
{
} /* size: 0 */

// <00061FAE> engine2/debugvisualizer.cpp:18
// variables: 2
// function calls: 13
void CDebugVisualizerMgr::~CDebugVisualizerMgr()
{
	{
		int i; // 20
	}
	{
		int i; // 20
		Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 20
		IDebugVisualizer::~IDebugVisualizer(); // 51
		CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime(); // 51
		CDebugVisualizerAbsTime::~CDebugVisualizerAbsTime(); // 22
		CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
				int i);  // 22
	}
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::RemoveAll(); // 24
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::Purge(); // 903
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::Purge(); // 1799
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::Purge(); // 560
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::~CUtlVector(); // 25
} /* size: 223, inline expansions: 7 (128 bytes) */

// <00061F87> engine2/debugvisualizer.cpp:18
// variable: 1
void CDebugVisualizerMgr::~CDebugVisualizerMgr()
{
	{
		int i; // 20
	}
} /* size: 0 */

// <00061F28> engine2/debugvisualizer.cpp:27
// function call: 1
void CDebugVisualizerMgr::GetDebugVisualizerCount()
{
	Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 29
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00061ACE> engine2/debugvisualizer.cpp:32
// variable: 1
// function calls: 19
void CDebugVisualizerMgr::AddDebugVisualizer(CUtlStringToken nTokenID, IDebugVisualizer* pVisualizer)
{
	int nIndex; // 34
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::NumAllocated(); // 1143
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::Base(); // 112
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::Base(); // 368
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::IsGrowable(); // 823
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::Element(
		int i);  // 1148
	CUtlStringToken::CUtlStringToken(); // 34
	DebugVisElement_t::DebugVisElement_t(); // 1479
	Construct<CDebugVisualizerMgr::DebugVisElement_t>(DebugVisElement_t* pMemory); // 1148
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::AddToTail(); // 34
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
			int i);  // 35
	CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
			int i);  // 36
} /* size: 347, variables: 1, inline expansions: 19 (899 bytes) */

// <00061822> engine2/debugvisualizer.cpp:39
// variables: 3
// function calls: 10
void CDebugVisualizerMgr::RemoveDebugVisualizer(CUtlStringToken nTokenID)
{
	{
		int i; // 41
		{
			IDebugVisualizer* pVisualizer; // 45
			{
				const bool  bNotLast; // 1578
				CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::Element(
					int i);  // 1584
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 1584
			}
			Destruct<CDebugVisualizerMgr::DebugVisElement_t>(DebugVisElement_t* pMemory); // 1575
			CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::FastRemove(
					int elem);  // 46
		}
		Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 41
		CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
				int i);  // 43
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 43
	}
} /* size: 102 */

// <000616B1> engine2/debugvisualizer.cpp:53
// variables: 2
// function calls: 4
void CDebugVisualizerMgr::FindDebugVisualizer(CUtlStringToken nTokenID)
{
	{
		int i; // 55
		{
			IDebugVisualizer* pVisualizer; // 59
		}
		Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 55
		CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
				int i);  // 57
		CUtlStringToken::operator==(
				const CUtlStringToken& other);  // 57
	}
} /* size: 59 */

// <0006152D> engine2/debugvisualizer.cpp:66
// variable: 1
// function calls: 4
void CDebugVisualizerMgr::SetOverlayStartTime(float flOverlayStartTime, bool bInterpolated)
{
	{
		int i; // 68
		Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 68
		CDebugVisualizerAbsTime::SetOverlayStartTime(
					float flOverlayStartTime,
					bool bInterpolated);  // 70
		CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
				int i);  // 70
	}
} /* size: 161 */

// <0006687B> engine2/debugvisualizer.cpp:76
// variable: 1
// function calls: 7
void CDebugVisualizerMgr::DebugDraw(CFrustum* pFrustum, ISceneView* pView, float flRenderTime, float flTimeStep)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 79
	{
		int i; // 82
		Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 82
		CDebugVisualizerAbsTime::DebugDraw(
				CFrustum* pFrustum,
				ISceneView* pView,
				float flRenderTime,
				float flTimeStep);  // 84
		CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
				int i);  // 84
	}
	CDebugVisualizerMgr::DebugDraw(
			CFrustum* pFrustum,
			ISceneView* pView,
			float flRenderTime,
			float flTimeStep);  // 76
} /* size: 193, inline expansions: 3 (116 bytes) */

// <000614D6> engine2/debugvisualizer.cpp:76
// variable: 1
void CDebugVisualizerMgr::DebugDraw(CFrustum* pFrustum, ISceneView* pView, float flRenderTime, float flTimeStep)
{
	{
		int i; // 82
	}
} /* size: 0 */

// <00061358> engine2/debugvisualizer.cpp:89
// variable: 1
// function calls: 4
void CDebugVisualizerMgr::AgeList(float flRenderTime, float flTimeStep)
{
	{
		int i; // 92
		Count(const CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int this); // 92
		CDebugVisualizerAbsTime::AgeList(
			float flRenderTime,
			float flTimeStep);  // 94
		CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDebugVisualizerMgr::DebugVisElement_t, CUtlMemory<CDebugVisualizerMgr::DebugVisElement_t, int> >::operator[](
				int i);  // 94
	}
} /* size: 177 */

// <0006131A> engine2/debugvisualizer.cpp:98
void CDebugVisualizerMgr::SetTimeDelta(float64 dt)
{
} /* size: 10 */

