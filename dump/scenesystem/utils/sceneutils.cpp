
//
// scenesystem/utils/sceneutils.cpp
//
//	referenced by: libengine2.so
//
//	functions: 46
//	classes: 3
//

// <03ADE46F> ../scenesystem/utils/sceneutils.cpp:37
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 32
class CRenderingPipelineAlias : public CRenderingPipeline {
public:
	/* class CRenderingPipeline <ancestor>; */ /* 0 24 */
	void CRenderingPipelineAlias(CRenderingPipelineAlias* , CRenderingPipelineAlias& );
	void CRenderingPipelineAlias(CRenderingPipelineAlias* , const CRenderingPipelineAlias& );
	void ~CRenderingPipelineAlias(CRenderingPipelineAlias* );
	/* ../scenesystem/utils/sceneutils.cpp:40 */
	void CRenderingPipelineAlias(CRenderingPipelineAlias* , IRenderingPipeline* , const char* );
	/* ../scenesystem/utils/sceneutils.cpp:45 */
	virtual void AddLayersToView(CRenderingPipelineAlias* , ISceneView* , const RenderViewport_t& , const PipelineRenderTargetInfo_t& , CRenderAttributes* );
	/* ../scenesystem/utils/sceneutils.cpp:50 */
	virtual void GetAdjustedViewport(CRenderingPipelineAlias* , CUtlStringToken, const RenderViewport_t& , RenderViewport_t* );
	/* ../scenesystem/utils/sceneutils.cpp:55 */
	void SetRenderingPipeline(CRenderingPipelineAlias* , IRenderingPipeline* );
	/* ../scenesystem/utils/sceneutils.cpp:60 */
	virtual bool SupportsMSAA(const CRenderingPipelineAlias* );
private:
	IRenderingPipeline * m_pRenderingPipeline; /* 24 8 */
	void CRenderingPipelineAlias(class CRenderingPipelineAlias *, class CRenderingPipelineAlias &); /* linkage=_ZN23CRenderingPipelineAliasC4EOS_ */
	void CRenderingPipelineAlias(class CRenderingPipelineAlias *, const class CRenderingPipelineAlias  &); /* linkage=_ZN23CRenderingPipelineAliasC4ERKS_ */
	void ~CRenderingPipelineAlias(class CRenderingPipelineAlias *); /* linkage=_ZN23CRenderingPipelineAliasD4Ev */
	void CRenderingPipelineAlias(class CRenderingPipelineAlias *, class IRenderingPipeline *, const char  *); /* linkage=_ZN23CRenderingPipelineAliasC4EP18IRenderingPipelinePKc */
	/* <3af8acd> ../scenesystem/utils/sceneutils.cpp:45 */
	virtual void AddLayersToView(class CRenderingPipelineAlias *, class ISceneView *, const class RenderViewport_t  &, const class PipelineRenderTargetInfo_t  &, class CRenderAttributes *); /* linkage=_ZN23CRenderingPipelineAlias15AddLayersToViewEP10ISceneViewRK16RenderViewport_tRK26PipelineRenderTargetInfo_tP17CRenderAttributes */
	virtual void GetAdjustedViewport(class CRenderingPipelineAlias *, class CUtlStringToken, const class RenderViewport_t  &, class RenderViewport_t *); /* linkage=_ZN23CRenderingPipelineAlias19GetAdjustedViewportE15CUtlStringTokenRK16RenderViewport_tPS1_ */
	void SetRenderingPipeline(class CRenderingPipelineAlias *, class IRenderingPipeline *); /* linkage=_ZN23CRenderingPipelineAlias20SetRenderingPipelineEP18IRenderingPipeline */
	virtual bool SupportsMSAA(const class CRenderingPipelineAlias  *); /* linkage=_ZNK23CRenderingPipelineAlias12SupportsMSAAEv */
};

// <03AF4D2A> ../scenesystem/utils/sceneutils.cpp:40
void CRenderingPipelineAlias::CRenderingPipelineAlias(IRenderingPipeline* pRenderingPipeline, const char* pName)
{
} /* size: 0 */

// <03AF4CF9> ../scenesystem/utils/sceneutils.cpp:40
inline void CRenderingPipelineAlias::CRenderingPipelineAlias(IRenderingPipeline* pRenderingPipeline, const char* pName)
{
} /* size: 0 */

// <03AF8ACD> ../scenesystem/utils/sceneutils.cpp:45
// function calls: 8
void CRenderingPipelineAlias::AddLayersToView(ISceneView* pView, const RenderViewport_t& viewport, const PipelineRenderTargetInfo_t& rtInfo, CRenderAttributes* pAttributes)
{
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
	CRenderingPipelineAlias::AddLayersToView(
			ISceneView* pView,
			const RenderViewport_t& viewport,
			const PipelineRenderTargetInfo_t& rtInfo,
			CRenderAttributes* pAttributes);  // 47
} /* size: 153, inline expansions: 8 (572 bytes) */

// <03AF4CB0> ../scenesystem/utils/sceneutils.cpp:45
inline void CRenderingPipelineAlias::AddLayersToView(ISceneView* pView, const RenderViewport_t& viewport, const PipelineRenderTargetInfo_t& rtInfo, CRenderAttributes* pAttributes)
{
} /* size: 0 */

// <03AF4C26> ../scenesystem/utils/sceneutils.cpp:50
void CRenderingPipelineAlias::GetAdjustedViewport(CUtlStringToken nViewportType, const RenderViewport_t& inViewport, RenderViewport_t* pOutAdjustedViewport)
{
} /* size: 14 */

// <03AF4C01> ../scenesystem/utils/sceneutils.cpp:55
inline void CRenderingPipelineAlias::SetRenderingPipeline(IRenderingPipeline* pPipeline)
{
} /* size: 0 */

// <03AF4BCD> ../scenesystem/utils/sceneutils.cpp:60
void CRenderingPipelineAlias::SupportsMSAA()
{
} /* size: 14 */

// <03AF4A79> ../scenesystem/utils/sceneutils.cpp:74
void* __CreateCSceneUtilsISceneUtils_interface(void)
{
} /* size: 12 */

// <03AF4A4B> ../scenesystem/utils/sceneutils.cpp:86
void CSceneUtils::GetDependencies()
{
} /* size: 12 */

// <03AF48F6> ../scenesystem/utils/sceneutils.cpp:95
// variable: 1
// function calls: 4
void CSceneUtils::Init()
{
	InitReturnVal_t nRetVal; // 97
	CTier0AppSystem<ISceneUtils, 0>::Init(); // 71
	CTier2AppSystem<ISceneUtils, 0>::Init(); // 97
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 101
} /* size: 100, variables: 1, inline expansions: 4 (65 bytes) */

// <03AF4273> ../scenesystem/utils/sceneutils.cpp:109
// variables: 9
// function calls: 26
void CSceneUtils::Shutdown()
{
	{
		int i; // 107
		operator()(const class* __closure,
				uint32 nAttributeKey,
				RenderingPipelineInfo_t& pInfo); // 111
	}
	CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::VisitAllAttributesForWrite<CSceneUtils::Shutdown(
															 f);  // 441
	{
		OverflowChunk_t& p; // 442
		CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>& __for_range; // 7391
		CUtlIntrusiveListIterator<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_begin; // 7401
		CUtlIntrusiveListIterator<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_end; // 7411
		CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::begin(); // 442
		CUtlIntrusiveListIterator<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::end(); // 442
		{
			int i; // 107
			operator()(const class* __closure,
					uint32 nAttributeKey,
					RenderingPipelineInfo_t& pInfo); // 111
		}
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::VisitAllAttributesForWrite<CSceneUtils::Shutdown(
																 f);  // 444
		CUtlIntrusiveListIterator<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::operator++(); // 442
	}
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::VisitAllAttributesForWrite<CSceneUtils::Shutdown(
															 f);  // 111
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Purge(); // 400
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 61
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 62
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 63
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 64
	SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::Clear(); // 409
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::Clear(
		bool bFreeHashMemory);  // 119
	CTier0AppSystem<ISceneUtils, 0>::Shutdown(); // 85
	CTier2AppSystem<ISceneUtils, 0>::Shutdown(); // 121
} /* size: 398, inline expansions: 17 (567 bytes) */

// <03AF3A9B> ../scenesystem/utils/sceneutils.cpp:124
// variables: 16
// function calls: 28
void CSceneUtils::RegisterRenderingPipeline(IRenderingPipeline* pPipeline)
{
	CUtlStringToken id; // 126
	RenderingPipelineInfo_t info; // 127
	CRenderingPipeline::GetId(); // 126
	RenderingPipelineInfo_t::RenderingPipelineInfo_t(
				IRenderingPipeline* pPipeline,
				bool bIsAlias);  // 127
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>& __for_range; // 64187
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_begin; // 64197
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_end; // 64207
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::operator++(); // 279
		}
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 270
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 465
	}
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::GetValue(
		RenderingPipelineInfo_t* pOutputValue,
		const CUtlStringToken& attrName);  // 128
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::SetValue(
		const CUtlStringToken& nTok,
		RenderingPipelineInfo_t nValue);  // 136
	CRenderingPipeline::GetName(); // 130
} /* size: 349, variables: 2, inline expansions: 6 (223 bytes) */

// <03AF2728> ../scenesystem/utils/sceneutils.cpp:139
// variables: 31
// function calls: 70
void CSceneUtils::AliasRenderingPipeline(const char* pName, CUtlStringToken existingId)
{
	CUtlStringToken id; // 141
	RenderingPipelineInfo_t existingInfo; // 145
	RenderingPipelineInfo_t info; // 152
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 141
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 142
	RenderingPipelineInfo_t::RenderingPipelineInfo_t(
				IRenderingPipeline* pPipeline,
				bool bIsAlias);  // 145
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>& __for_range; // 64187
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_begin; // 64197
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_end; // 64207
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 465
	}
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::GetValue(
		RenderingPipelineInfo_t* pOutputValue,
		const CUtlStringToken& attrName);  // 146
	RenderingPipelineInfo_t::RenderingPipelineInfo_t(
				IRenderingPipeline* pPipeline,
				bool bIsAlias);  // 152
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>& __for_range; // 64187
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_begin; // 64197
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_end; // 64207
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 465
	}
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::GetValue(
		RenderingPipelineInfo_t* pOutputValue,
		const CUtlStringToken& attrName);  // 153
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 356
	CRenderingPipeline::SetName(
		const char* pName);  // 42
	IRenderingPipeline::IRenderingPipeline(); // 350
	CUtlStringToken::CUtlStringToken(); // 350
	CRenderingPipeline::CRenderingPipeline(); // 40
	CRenderingPipelineAlias::CRenderingPipelineAlias(
				IRenderingPipeline* pRenderingPipeline,
				const char* pName);  // 164
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::SetValue(
		const CUtlStringToken& nTok,
		RenderingPipelineInfo_t nValue);  // 166
	CRenderingPipelineAlias::SetRenderingPipeline(
				IRenderingPipeline* pPipeline);  // 160
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 148
} /* size: 0, variables: 3, inline expansions: 22 (1105 bytes) */

// <03AF1F32> ../scenesystem/utils/sceneutils.cpp:170
// variables: 16
// function calls: 30
void CSceneUtils::UnregisterRenderingPipeline(IRenderingPipeline* pPipeline)
{
	CUtlStringToken id; // 172
	RenderingPipelineInfo_t info; // 173
	CRenderingPipeline::GetId(); // 172
	RenderingPipelineInfo_t::RenderingPipelineInfo_t(
				IRenderingPipeline* pPipeline,
				bool bIsAlias);  // 173
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 461
	{
		int nIndex; // 465
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>& __for_range; // 64187
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_begin; // 64197
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_end; // 64207
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 465
	}
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::GetValue(
		RenderingPipelineInfo_t* pOutputValue,
		const CUtlStringToken& attrName);  // 174
	CRenderingPipeline::GetName(); // 176
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::SetValue(
		const CUtlStringToken& nTok,
		RenderingPipelineInfo_t nValue);  // 188
} /* size: 389, variables: 2, inline expansions: 6 (242 bytes) */

// <03AF1801> ../scenesystem/utils/sceneutils.cpp:191
// variables: 15
// function calls: 28
void CSceneUtils::FindRenderingPipeline(CUtlStringToken id)
{
	RenderingPipelineInfo_t defaultPipeline; // 193
	RenderingPipelineInfo_t::RenderingPipelineInfo_t(
				IRenderingPipeline* pPipeline,
				bool bIsAlias);  // 193
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			const OverflowChunk_t& p; // 279
			const CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>& __for_range; // 64187
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_begin; // 64197
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t> __for_end; // 64207
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::Head(); // 1160
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1160
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::begin(); // 279
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							const OverflowChunk_t* pNode);  // 1165
			CUtlIntrusiveList<CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::end(); // 279
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 281
			CUtlIntrusiveListIterator<const CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t>::OverflowChunk_t>::operator++(); // 279
			CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
						int nIdx);  // 284
		}
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 270
		CUtlAttributeListChunk<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const RenderingPipelineInfo_t ** pValueOut);  // 381
	}
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::GetValueOrDefault(
				uint32 k,
				RenderingPipelineInfo_t nDefault);  // 393
	CUtlAttributeList<CSceneUtils::RenderingPipelineInfo_t, 16, CSceneUtils::RenderingPipelineInfo_t, 16>::GetValueOrDefault(
				CUtlStringToken nTok,
				RenderingPipelineInfo_t nDefault);  // 194
} /* size: 223, variables: 1, inline expansions: 4 (422 bytes) */

// <03AF88EB> ../scenesystem/utils/sceneutils.cpp:197
// function calls: 2
void CSceneUtils::CreateTonemapSystem()
{
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 199
	CSceneUtils::CreateTonemapSystem(); // 197
} /* size: 92, inline expansions: 2 (46 bytes) */

// <03AF17E8> ../scenesystem/utils/sceneutils.cpp:197
void CSceneUtils::CreateTonemapSystem()
{
} /* size: 0 */

// <03AF885C> ../scenesystem/utils/sceneutils.cpp:207
// function call: 1
void CSceneUtils::CreateVolumetricFog()
{
	CSceneUtils::CreateVolumetricFog(); // 207
} /* size: 68, inline expansions: 1 (26 bytes) */

// <03AF17CF> ../scenesystem/utils/sceneutils.cpp:207
void CSceneUtils::CreateVolumetricFog()
{
} /* size: 0 */

// <03AF89E8> ../scenesystem/utils/sceneutils.cpp:216
// function calls: 3
void CSceneUtils::DestroyTonemapSystem(ITonemapSystem* pTonemapSystem)
{
	CHistogramBucket::~CHistogramBucket(); // 109
	CTonemapSystem::~CTonemapSystem(); // 218
	CSceneUtils::DestroyTonemapSystem(
				ITonemapSystem* pTonemapSystem);  // 216
} /* size: 121, inline expansions: 3 (160 bytes) */

// <03AF1777> ../scenesystem/utils/sceneutils.cpp:216
void CSceneUtils::DestroyTonemapSystem(ITonemapSystem* pTonemapSystem)
{
} /* size: 0 */

// <03AF171C> ../scenesystem/utils/sceneutils.cpp:222
void CSceneUtils::DestroyVolumetricFog(IVolumetricFog* pVolumetricFog)
{
} /* size: 25 */

// <03AF1089> ../scenesystem/utils/sceneutils.cpp:227
// variables: 8
// function calls: 21
void CSceneUtils::CreateClearRenderTargetView(const char* pDebugName, int nPriority, HRenderTexture hColorTexture, HRenderTexture hDepthTexture, const Vector4D& clearColor)
{
	HRenderTexture hSizeDesc; // 233
	RenderViewport_t viewport; // 235
	const CTextureDesc* pDesc; // 236
	CFrustum fakeFrustum; // 241
	ISceneView* pClearView; // 243
	HSceneViewRenderTarget hOutputColor; // 245
	HSceneViewRenderTarget hOutputDepth; // 246
	ISceneLayer* pClearLayer; // 248
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 229
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 229
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 233
	RenderViewport_t::RenderViewport_t(); // 235
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 236
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 245
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 246
	Vector4D::operator=(
			const Vector4D& vOther);  // 234
	ISceneLayer::SetClearColor(
			const Vector4D& vecColor,
			int nRenderTargetIndex);  // 249
	SceneLayerOutputs_t::Init(
		HSceneViewRenderTarget hColor0,
		HSceneViewRenderTarget hDepth,
		RenderColorSpace_t allowSrgbWrites);  // 250
	CFrustum::~CFrustum(); // 252
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 229
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 229
} /* size: 563, variables: 8, inline expansions: 21 (241 bytes) */

// <03AF0F23> ../scenesystem/utils/sceneutils.cpp:254
// variable: 1
// function calls: 2
void CSceneUtils::AddSimpleLayerToView(ISceneView* pView, const char* pDebugName, const RenderViewport_t& viewport, const CUtlStringToken& drawMode, ESceneObjectFlags requiredFlags, ESceneObjectFlags excludedFlags, const SceneLayerOutputs_t& outputs)
{
	ISceneLayer* pNewLayer; // 256
	operator|=(ESceneObjectFlags& a,
			ESceneObjectFlags b);  // 605
	ISceneLayer::AddObjectFlagsRequiredMask(
					ESceneObjectFlags nRequiredFlags);  // 257
} /* size: 229, variables: 1, inline expansions: 2 (56 bytes) */

// <03AF0EC0> ../scenesystem/utils/sceneutils.cpp:263
void CSceneUtils::CreateModelRenderHelper()
{
} /* size: 40 */

// <03AE1D3B> ../scenesystem/utils/sceneutils.cpp:268
// function call: 1
void CTextureDisplayLayerRenderer::~CTextureDisplayLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 268
} /* size: 5, inline expansions: 1 (0 bytes) */

// <03AE1C85> ../scenesystem/utils/sceneutils.cpp:268
// function calls: 2
void CTextureDisplayLayerRenderer::~CTextureDisplayLayerRenderer()
{
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 268
	CTextureDisplayLayerRenderer::~CTextureDisplayLayerRenderer(); // 268
} /* size: 14, inline expansions: 2 (0 bytes) */

// <03AE1C68> ../scenesystem/utils/sceneutils.cpp:268
inline void CTextureDisplayLayerRenderer::~CTextureDisplayLayerRenderer()
{
} /* size: 0 */

// <03ADDE02> ../scenesystem/utils/sceneutils.cpp:268
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CTextureDisplayLayerRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CTextureDisplayLayerRenderer(CTextureDisplayLayerRenderer* , CTextureDisplayLayerRenderer& );
	void CTextureDisplayLayerRenderer(CTextureDisplayLayerRenderer* , const CTextureDisplayLayerRenderer& );
	/* ../scenesystem/utils/sceneutils.cpp:271 */
	void CTextureDisplayLayerRenderer(CTextureDisplayLayerRenderer* );
	/* ../scenesystem/utils/sceneutils.cpp:273 */
	virtual void Render(CTextureDisplayLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	virtual void ~CTextureDisplayLayerRenderer(CTextureDisplayLayerRenderer* );
	void CTextureDisplayLayerRenderer(class CTextureDisplayLayerRenderer *, class CTextureDisplayLayerRenderer &); /* linkage=_ZN28CTextureDisplayLayerRendererC4EOS_ */
	void CTextureDisplayLayerRenderer(class CTextureDisplayLayerRenderer *, const class CTextureDisplayLayerRenderer  &); /* linkage=_ZN28CTextureDisplayLayerRendererC4ERKS_ */
	void CTextureDisplayLayerRenderer(class CTextureDisplayLayerRenderer *); /* linkage=_ZN28CTextureDisplayLayerRendererC4Ev */
	virtual void Render(class CTextureDisplayLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN28CTextureDisplayLayerRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CTextureDisplayLayerRenderer(class CTextureDisplayLayerRenderer *); /* linkage=_ZN28CTextureDisplayLayerRendererD4Ev */
};

// <03AF0EA9> ../scenesystem/utils/sceneutils.cpp:271
void CTextureDisplayLayerRenderer::CTextureDisplayLayerRenderer()
{
} /* size: 0 */

// <03AF0E90> ../scenesystem/utils/sceneutils.cpp:271
inline void CTextureDisplayLayerRenderer::CTextureDisplayLayerRenderer()
{
} /* size: 0 */

// <03AEFDBF> ../scenesystem/utils/sceneutils.cpp:273
// variables: 4
// function calls: 55
void CTextureDisplayLayerRenderer::Render(ISceneView* pView, IRenderContext* pCtx, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	Color eventColor; // 275
	CDynamicVertexData<VertexUVPos_t> vb; // 278
	const IMaterial2* pMat; // 298
	IMaterialMode* pMode; // 302
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 275
	Vector::Vector(); // 103
	VertexPos_t::VertexPos_t(); // 257
	Vector2D::Vector2D(); // 257
	VertexUVPos_t::VertexUVPos_t(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 180
	CVertexDataBase<VertexUVPos_t>::ClearVertexFields(); // 171
	CVertexDataBase<VertexUVPos_t>::CVertexDataBase(); // 673
	CDynamicVertexData<VertexUVPos_t>::Lock(
		int nVertexCount);  // 680
	CDynamicVertexData<VertexUVPos_t>::CDynamicVertexData(
				IRenderContext* pRenderContext,
				int nVertexCount,
				const char* pDebugName,
				const char* pBudgetGroup);  // 278
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 280
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 282
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 284
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 286
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 285
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 288
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 289
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 290
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 292
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 293
	{
	}
	Vector::operator=(
			const Vector& vOther);  // 103
	VertexPos_t::operator=(
			const VertexPos_t  &);  // 257
	Vector2D::operator=(
			const Vector2D& vOther);  // 257
	VertexUVPos_t::operator=(
			const VertexUVPos_t  &);  // 355
	{
	}
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 270
	CVertexDataBase<VertexUVPos_t>::AdvanceVertex(); // 294
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 760
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 639
	CDynamicVertexData<VertexUVPos_t>::Bind(
		int nSlot,
		int nOffset,
		int nStride);  // 640
	CDynamicVertexData<VertexUVPos_t>::UnlockAndBind(
			int nSlot,
			int nOffset,
			int nStride);  // 296
	CUtlStringToken::CUtlStringToken(); // 302
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 710
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData(); // 312
	CDynamicVertexData<VertexUVPos_t>::Unlock(); // 710
	{
	}
	{
	}
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 194
	CVertexDataBase<VertexUVPos_t>::~CVertexDataBase(); // 711
	CDynamicVertexData<VertexUVPos_t>::~CDynamicVertexData(); // 312
} /* size: 1609, variables: 4, inline expansions: 55 (2258 bytes) */

// <03AEEB7F> ../scenesystem/utils/sceneutils.cpp:315
// variables: 28
// function calls: 71
void CSceneUtils::AddTextureDebugLayer(ISceneView* pView, const char* pDebugName, const SceneLayerOutputs_t& outputs, const RenderViewport_t& viewport, HSceneViewRenderTarget hTexture, int nDebugShowTextureMode, bool bTextureIsSrgb)
{
	ISceneLayer* pLayer; // 317
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 271
	CTextureDisplayLayerRenderer::CTextureDisplayLayerRenderer(); // 317
	{
		RenderTargetAttribute_t attr; // 583
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 311
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 50253
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 50263
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 50273
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 309
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 314
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				RenderTargetAttribute_t** pValueOut);  // 356
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
				uint32 nKey,
				RenderTargetAttribute_t** pValueOut);  // 547
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 330
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 54098
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 54108
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 54118
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 339
			CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 337
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 343
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 328
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
					int nIdx);  // 334
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					RenderTargetAttribute_t** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 61
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 62
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 63
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 64
			SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 563
			AddToHead<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t, CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
			CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::AddToHead(
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 562
		}
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			uint32 nKey,
			RenderTargetAttribute_t nValue);  // 571
		CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
			const CUtlStringToken& nTok,
			RenderTargetAttribute_t nValue);  // 587
	}
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		HSceneViewRenderTarget hRenderTarget,
		SceneLayerMSAAMode_t nMSAAMode,
		uint32 nFlags);  // 321
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 254
	ISceneLayer::SetComboAttr(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 322
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 254
	ISceneLayer::SetComboAttr(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 323
} /* size: 955, variables: 1, inline expansions: 9 (681 bytes) */

// <03AED40E> ../scenesystem/utils/sceneutils.cpp:328
// variables: 27
// function calls: 93
void CSceneUtils::AddTextureDebugLayer(ISceneView* pView, const char* pDebugName, const SceneLayerOutputs_t& outputs, const RenderViewport_t& viewport, HRenderTexture hTexture, int nDebugShowTextureMode, bool bTextureIsSrgb)
{
	ISceneLayer* pLayer; // 330
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 271
	CTextureDisplayLayerRenderer::CTextureDisplayLayerRenderer(); // 330
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 334
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 245
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
	TextureAttr_t::TextureAttr_t(
			HRenderTexture hT,
			int32 nMip);  // 619
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
	TextureAttr_t::TextureAttr_t(
			const TextureAttr_t  &);  // 571
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		const OverflowChunk_t& p; // 279
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 731
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 741
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 751
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 281
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 284
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			i32x4 n4Key,
			const TextureAttrForStorage_t ** pValueOut);  // 270
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			i32x4 n4Key,
			TextureAttrForStorage_t** pValueOut);  // 356
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
			uint32 nKey,
			TextureAttrForStorage_t** pValueOut);  // 547
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
	TextureAttrForStorage_t::operator=(
			const TextureAttr_t& other);  // 551
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 624
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 634
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 644
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 337
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
					int nIdx);  // 343
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 328
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				TextureAttrForStorage_t** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
					ResourceHandle_t hUntypedResource);  // 227
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 76
		TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t, CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		AddToHead(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1000
	TextureAttrForStorage_t::operator=(
			const TextureAttr_t& other);  // 566
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		uint32 nKey,
		TextureAttr_t nValue);  // 571
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetValue(
		const CUtlStringToken& nTok,
		TextureAttr_t nValue);  // 619
	CRenderAttributes::SetTextureValue(
			CUtlStringToken nTokenID,
			HRenderTexture txtr,
			int32 nSingleMipLevelToBind);  // 245
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		HRenderTexture txtr,
		int32 nMipLevel);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 254
	ISceneLayer::SetComboAttr(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 335
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
	CRenderAttributes::SetComboValue(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 254
	ISceneLayer::SetComboAttr(
			CUtlStringToken nTokenID,
			uint8 nValue);  // 336
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 456
	CRenderAttributes::SetIntValue(
			CUtlStringToken nTokenID,
			int nValue);  // 247
	ISceneLayer::SetAttr(
		CUtlStringToken nTokenID,
		int nValue);  // 337
} /* size: 1033, variables: 1, inline expansions: 44 (3527 bytes) */

// <03AED340> ../scenesystem/utils/sceneutils.cpp:342
// function calls: 3
void CSceneUtils::AllocateViewProducerIndex()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 344
} /* size: 18, inline expansions: 3 (39 bytes) */

// <03AECF7E> ../scenesystem/utils/sceneutils.cpp:347
// variables: 15
// function calls: 5
void CSceneUtils::ComputeScreenSpaceVertices(const RenderViewport_t& viewport, int nDestX, int nDestY, int nDestWidth, int nDestHeight, float flSrcTextureX0, float flSrcTextureY0, float flSrcTextureX1, float flSrcTextureY1, int nSrcTextureWidth, int nSrcTextureHeight, ScreenSpaceVertex_t* pVertices)
{
	float flSubpixelOfs; // 352
	float flLeftU; // 354
	float flRightU; // 355
	float flTopV; // 356
	float flBottomV; // 357
	float flOOTexWidth; // 359
	float flOOTexHeight; // 360
	float flLeftX; // 367
	float flRightX; // 368
	float flTopY; // 369
	float flBottomY; // 370
	float flX1; // 372
	float flX0; // 373
	float flY0; // 374
	float flY1; // 375
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 374
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 372
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 373
	Vector2D::Init(
		vec_t ix,
		vec_t iy);  // 377
	FLerp(float f1,
		float f2,
		float i1,
		float i2,
		float x);  // 375
} /* size: 362, variables: 15, inline expansions: 5 (174 bytes) */

// <03AECE74> ../scenesystem/utils/sceneutils.cpp:391
// function calls: 2
void CSceneUtils::CreateFullscreenQuadRenderer(HMaterial hMaterial, const VertexColor_t& modulationColor)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 393
} /* size: 100, inline expansions: 2 (14 bytes) */

// <03AECD83> ../scenesystem/utils/sceneutils.cpp:396
// variables: 2
void CSceneUtils::CreateScalableAORenderer(RenderMultisampleType_t depthBufferMultisampleType, float flRadius, float flBias, float flStrength, bool bBlur)
{
	const char   __FUNCTION__; // 16313
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 398
	}
} /* size: 38, variables: 1 */

// <03AE20D9> ../scenesystem/utils/sceneutils.cpp:403
// function calls: 14
void CTextureBarrierLayerRenderer::~CTextureBarrierLayerRenderer()
{
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this); // 796
	CUtlLeanVectorFixedGrowable<RenderImageLayout_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 403
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 403
} /* size: 98, inline expansions: 14 (280 bytes) */

// <03AE1DB7> ../scenesystem/utils/sceneutils.cpp:403
// function calls: 16
void CTextureBarrierLayerRenderer::~CTextureBarrierLayerRenderer()
{
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this); // 796
	CUtlLeanVectorFixedGrowable<RenderImageLayout_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 403
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 403
	IProceduralLayerRenderer::~IProceduralLayerRenderer(); // 403
	CTextureBarrierLayerRenderer::~CTextureBarrierLayerRenderer(); // 403
} /* size: 107, inline expansions: 16 (327 bytes) */

// <03AE1D9A> ../scenesystem/utils/sceneutils.cpp:403
inline void CTextureBarrierLayerRenderer::~CTextureBarrierLayerRenderer()
{
} /* size: 0 */

// <03ADD898> ../scenesystem/utils/sceneutils.cpp:403
// member functions: 10
// member variables: 4
// static member variable: 1
// vtable entry: 1
// class size: 128
class CTextureBarrierLayerRenderer : public IProceduralLayerRenderer {
public:
	/* class IProceduralLayerRenderer <ancestor>; */ /* 0 8 */
	void CTextureBarrierLayerRenderer(CTextureBarrierLayerRenderer* , CTextureBarrierLayerRenderer& );
	void CTextureBarrierLayerRenderer(CTextureBarrierLayerRenderer* , const CTextureBarrierLayerRenderer& );
	/* ../scenesystem/utils/sceneutils.cpp:406 */
	void CTextureBarrierLayerRenderer(CTextureBarrierLayerRenderer* , int, const HRenderTexture* , int, const HSceneViewRenderTarget* , const SceneLayerMSAAMode_t* , const RenderImageLayout_t* );
	/* ../scenesystem/utils/sceneutils.cpp:426 */
	virtual void Render(CTextureBarrierLayerRenderer* , ISceneView* , IRenderContext* , ISceneLayer* , SceneSystemPerFrameStats_t* );
	int m_nSceneViewRenderTargetCount; /* 8 4 */
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int> m_textures __attribute__((__aligned__(8))); /* 16 72 */
	CUtlLeanVectorFixedGrowable<RenderImageLayout_t, 8, short int> m_imageLayouts __attribute__((__aligned__(8))); /* 88 40 */
	static class CUtlStringToken m_sSceneViewRTNames[16]; /* 0 0 */
	virtual void ~CTextureBarrierLayerRenderer(CTextureBarrierLayerRenderer* );
	void CTextureBarrierLayerRenderer(class CTextureBarrierLayerRenderer *, class CTextureBarrierLayerRenderer &); /* linkage=_ZN28CTextureBarrierLayerRendererC4EOS_ */
	void CTextureBarrierLayerRenderer(class CTextureBarrierLayerRenderer *, const class CTextureBarrierLayerRenderer  &); /* linkage=_ZN28CTextureBarrierLayerRendererC4ERKS_ */
	void CTextureBarrierLayerRenderer(class CTextureBarrierLayerRenderer *, int, const HRenderTexture  *, int, const HSceneViewRenderTarget  *, const enum SceneLayerMSAAMode_t  *, const enum RenderImageLayout_t  *); /* linkage=_ZN28CTextureBarrierLayerRendererC4EiPK11CWeakHandleI31InfoForResourceTypeCTextureBaseEiPKP24HSceneViewRenderTarget__PK20SceneLayerMSAAMode_tPK19RenderImageLayout_t */
	virtual void Render(class CTextureBarrierLayerRenderer *, class ISceneView *, class IRenderContext *, class ISceneLayer *, class SceneSystemPerFrameStats_t *); /* linkage=_ZN28CTextureBarrierLayerRenderer6RenderEP10ISceneViewP14IRenderContextP11ISceneLayerP26SceneSystemPerFrameStats_t */
	virtual void ~CTextureBarrierLayerRenderer(class CTextureBarrierLayerRenderer *); /* linkage=_ZN28CTextureBarrierLayerRendererD4Ev */
} __attribute__((__aligned__(8)));

// <03AECC28> ../scenesystem/utils/sceneutils.cpp:406
// variables: 2
void CTextureBarrierLayerRenderer::CTextureBarrierLayerRenderer(int nTextureCount, const HRenderTexture* pTextures, int nSceneViewRenderTargetCount, const HSceneViewRenderTarget* pRenderTargets, const SceneLayerMSAAMode_t* pRenderTargetMSAAModes, const RenderImageLayout_t* pImageLayouts)
{
	{
		int i; // 414
	}
	{
		int i; // 419
	}
} /* size: 0 */

// <03AECBA2> ../scenesystem/utils/sceneutils.cpp:406
// variables: 2
inline void CTextureBarrierLayerRenderer::CTextureBarrierLayerRenderer(int nTextureCount, const HRenderTexture* pTextures, int nSceneViewRenderTargetCount, const HSceneViewRenderTarget* pRenderTargets, const SceneLayerMSAAMode_t* pRenderTargetMSAAModes, const RenderImageLayout_t* pImageLayouts)
{
	{
		int i; // 414
	}
	{
		int i; // 419
	}
} /* size: 0 */

// <03AEBD4B> ../scenesystem/utils/sceneutils.cpp:426
// variables: 16
// function calls: 63
void CTextureBarrierLayerRenderer::Render(ISceneView* pView, IRenderContext* pRenderContext, ISceneLayer* pLayer, SceneSystemPerFrameStats_t* pStats)
{
	int nFirstRTSlot; // 428
	{
		int i; // 429
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 431
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 624
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 624
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 376
		{
			int nIndex; // 381
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 731
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 741
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 751
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 381
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 383
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
					uint32 k,
					TextureAttr_t nDefault);  // 393
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 393
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValueOrDefault(
					CUtlStringToken nTok,
					TextureAttr_t nDefault);  // 625
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 625
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 625
		CRenderAttributes::GetTextureValue(
				CUtlStringToken nTokenID,
				HRenderTexture defaultTxtr);  // 431
		AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
				int i);  // 431
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 431
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int this); // 428
	AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 434
	AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 434
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int this); // 434
} /* size: 474, variables: 1, inline expansions: 8 (130 bytes) */

// <03AEA3F8> ../scenesystem/utils/sceneutils.cpp:463
// variables: 32
// function calls: 109
void CSceneUtils::AddTextureBarrierLayer(ISceneView* pView, const char* pDebugName, int nTextureCount, const HRenderTexture* pTextures, int nSceneViewRenderTargetCount, const HSceneViewRenderTarget* pRenderTargets, const SceneLayerMSAAMode_t* pRenderTargetMSAAModes, const RenderImageLayout_t* pImageLayouts)
{
	CTextureBarrierLayerRenderer* pLayerRenderer; // 467
	ISceneLayer* pLayer; // 468
	{
		int i; // 472
		{
			RenderTargetAttribute_t attr; // 583
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 50253
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 50263
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 50273
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::Head(); // 1151
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::begin(); // 317
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::end(); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 317
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
							int nIdx);  // 322
			}
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					RenderTargetAttribute_t** pValueOut);  // 309
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 314
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					RenderTargetAttribute_t** pValueOut);  // 356
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexOfMatch(
					uint32 nKey,
					RenderTargetAttribute_t** pValueOut);  // 547
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>& __for_range; // 54098
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_begin; // 54108
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t> __for_end; // 54118
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::operator++(); // 337
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
							int nIdx);  // 343
			}
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						RenderTargetAttribute_t** pValueOut);  // 328
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
						int nIdx);  // 334
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						RenderTargetAttribute_t** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 61
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 62
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 63
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 64
				SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t, CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>::AddToHead(
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetValuePtrFromIndex(
							int nIdx);  // 563
				CUtlAttributeListChunk<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t>::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
				uint32 nKey,
				RenderTargetAttribute_t nValue);  // 571
			CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t, 16, ISceneLayer::RenderTargetAttribute_t, 16>::SetValue(
				const CUtlStringToken& nTok,
				RenderTargetAttribute_t nValue);  // 587
		}
		ISceneLayer::SetAttr(
			CUtlStringToken nTokenID,
			HSceneViewRenderTarget hRenderTarget,
			SceneLayerMSAAMode_t nMSAAMode,
			uint32 nFlags);  // 475
	}
	Min<int>(const int& val1,
		const int& val2);  // 410
	AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 518
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 1479
	Construct<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 63
	UtlTraitsConstructRange<CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pStart,
										CWeakHandle<InfoForResourceTypeCTextureBase>* pEnd);  // 523
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
		int nCount);  // 411
	SetCount(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this,
		int nCount);  // 412
	{
		int i; // 414
		AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
				int i);  // 416
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 416
		AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this,
				int i);  // 417
	}
	{
		int i; // 419
		AlignedByteArrayExplicit_t<8, CWeakHandle<InfoForResourceTypeCTextureBase>, 8>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this,
				int i);  // 421
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 421
		AlignedByteArrayExplicit_t<8, RenderImageLayout_t, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this,
				int i);  // 422
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 421
	}
	IProceduralLayerRenderer::IProceduralLayerRenderer(); // 409
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>, CWe this); // 799
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 8, short int>::CUtlLeanVectorFixedGrowable(); // 409
	CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderImageLayout_t, 8, short int>, RenderImageLayout_t, short i this); // 799
	CUtlLeanVectorFixedGrowable<RenderImageLayout_t, 8, short int>::CUtlLeanVectorFixedGrowable(); // 409
	CTextureBarrierLayerRenderer::CTextureBarrierLayerRenderer(
					int nTextureCount,
					const HRenderTexture* pTextures,
					int nSceneViewRenderTargetCount,
					const HSceneViewRenderTarget* pRenderTargets,
					const SceneLayerMSAAMode_t* pRenderTargetMSAAModes,
					const RenderImageLayout_t* pImageLayouts);  // 467
	RenderViewport_t::Init(
		int x,
		int y,
		int nWidth,
		int nHeight,
		float flMinZ,
		float flMaxZ);  // 404
	RenderViewport_t::RenderViewport_t(
			int x,
			int y,
			int nWidth,
			int nHeight,
			float flMinZ,
			float flMaxZ);  // 468
} /* size: 1342, variables: 2, inline expansions: 19 (1014 bytes) */

// <03AE99A1> ../scenesystem/utils/sceneutils.cpp:485
// variables: 9
// function calls: 29
void CSceneUtils::Compute3DSkyboxFrustum(const CFrustum& inFrustum, const Vector& vSkyboxOrigin, const QAngle& vSkyboxAngles, const Vector& vSkyboxCameraOrigin, float flSkyboxScale, CFrustum* pOutSkyboxFrustum)
{
	const char   __FUNCTION__; // 16264
	const Vector& vViewPostion; // 491
	const QAngle& vViewAngles; // 492
	matrix3x4_t mViewTransform; // 493
	matrix3x4_t mSkyReferenceTransform; // 497
	matrix3x4_t mSkyViewTransform; // 503
	const Vector  vSkyCameraPosition; // 508
	QAngle vSkyCameraAngles; // 510
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
	}
	Vector::operator=(
			const Vector& vOther);  // 27
	QAngle::operator=(
			const QAngle& vOther);  // 27
	Camera_t::operator=(
			const Camera_t  &);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	Vector::operator=(
			const Vector& vOther);  // 264
	QAngle::operator=(
			const QAngle& vOther);  // 264
	CFrustum::operator=(
			const CFrustum  &);  // 488
	CFrustum::GetCameraAngles(); // 492
	matrix3x4_t::InitFromQAngles(
			const QAngle& angles,
			const Vector& vPosition);  // 494
	CFrustum::GetCameraPosition(); // 491
	matrix3x4_t::matrix3x4_t(); // 493
	matrix3x4_t::matrix3x4_t(); // 497
	matrix3x4_t::InitFromQAngles(
			const QAngle& angles,
			const Vector& vPosition);  // 498
	matrix3x4_t::matrix3x4_t(); // 503
	matrix3x4_t::matrix3x4_t(); // 2793
	matrix3x4_t::InverseTR(); // 504
	MatrixMultiply(const matrix3x4_t& in1,
			const matrix3x4_t& in2,
			matrix3x4_t& out);  // 504
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 508
	Vector::Vector(); // 1464
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::operator/(
			float fl);  // 508
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 508
	QAngle::QAngle(); // 510
	CFrustum::SetWorldScale(
			float flWorldScale);  // 514
} /* size: 0, variables: 8, inline expansions: 29 (1647 bytes) */

// <03AE9209> ../scenesystem/utils/sceneutils.cpp:518
// variables: 15
// function calls: 20
void CSceneUtils::FindClipSpaceRectForObject(const CSceneObject* pObject, const ISceneView* pView, Vector4D& vRect)
{
	Vector vMinsVs; // 520
	Vector vMaxsVs; // 520
	const matrix3x4_t& mView; // 521
	Vector vMins; // 522
	Vector vMaxs; // 522
	float flNear; // 527
	float flFar; // 527
	Vector vCornersVs; // 535
	const VMatrix& mProj; // 547
	float fMinX; // 549
	float fMaxX; // 549
	float fMinY; // 549
	float fMaxY; // 549
	{
		int i; // 553
		{
			Vector vScreenSpacePoint; // 555
			VMatrix::V3Mul(
				const Vector& vIn,
				Vector& vOut);  // 556
			Vector::Vector(); // 555
		}
	}
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 523
	Vector::Vector(); // 520
	Vector::Vector(); // 520
	CFrustum::GetView(); // 521
	Vector::Vector(); // 522
	Vector::Vector(); // 522
	matrix3x4_t::TransformAABB(
			const Vector& vecMinsIn,
			const Vector& vecMaxsIn,
			Vector& vecMinsOut,
			Vector& vecMaxsOut);  // 524
	CFrustum::GetCameraNearFarPlanes(
				float& flNear,
				float& flFar);  // 528
	Max<float>(const float& val1,
			const float& val2);  // 529
	Min<float>(const float& val1,
			const float& val2);  // 530
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 545
} /* size: 854, variables: 13, inline expansions: 18 (197 bytes) */

