
//
// renderingpipelines/renderingpipelines.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//

// <02878BB0> renderingpipelines/renderingpipelines.cpp:23
void CRenderingPipelines::CRenderingPipelines()
{
} /* size: 0 */

// <02878B94> renderingpipelines/renderingpipelines.cpp:23
inline void CRenderingPipelines::CRenderingPipelines()
{
} /* size: 0 */

// <02874D2E> renderingpipelines/renderingpipelines.cpp:23
// function calls: 19
void CRenderingPipelines::~CRenderingPipelines()
{
	CUtlMemory<IRenderingPipeline::IsExternallyAllocated(); // 905
	CUtlMemory<IRenderingPipeline::Purge(); // 903
	CUtlMemory<IRenderingPipeline::Purge(); // 1799
	CUtlVectorBase<IRenderingPipeline::RemoveAll(); // 1798
	CUtlVectorBase<IRenderingPipeline::Purge(); // 560
	ValidateAlignment<IRenderingPipeline*>(void); // 508
	CUtlMemory<IRenderingPipeline::Purge(); // 510
	CUtlMemory<IRenderingPipeline::~CUtlMemory(); // 562
	CUtlVectorBase<IRenderingPipeline::~CUtlVectorBase(); // 410
	CUtlVector<IRenderingPipeline::~CUtlVector(); // 23
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IAppSystem, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IAppSystem, 0>::~CTier3AppSystem(); // 23
} /* size: 114, inline expansions: 19 (444 bytes) */

// <02874D12> renderingpipelines/renderingpipelines.cpp:23
inline void CRenderingPipelines::~CRenderingPipelines()
{
} /* size: 0 */

// <02872662> renderingpipelines/renderingpipelines.cpp:23
// member functions: 14
// member variables: 2
// vtable entries: 3
// class size: 80
class CRenderingPipelines : public CTier3AppSystem<IAppSystem, 0> {
public:
	/* class CTier3AppSystem<IAppSystem, 0> <ancestor>; */ /* 0 48 */
	void CRenderingPipelines(CRenderingPipelines* , CRenderingPipelines& );
	void CRenderingPipelines(CRenderingPipelines* , const CRenderingPipelines& );
	void CRenderingPipelines(CRenderingPipelines* );
	/* renderingpipelines/renderingpipelines.cpp:55 */
	virtual const AppSystemInfo_t* GetDependencies(CRenderingPipelines* );
	/* renderingpipelines/renderingpipelines.cpp:64 */
	virtual InitReturnVal_t Init(CRenderingPipelines* );
	/* renderingpipelines/renderingpipelines.cpp:125 */
	virtual void Shutdown(CRenderingPipelines* );
private:
	CUtlVector<IRenderingPipeline*, CUtlMemory<IRenderingPipeline*, int> > m_pipelineAliases; /* 48 32 */
	void ~CRenderingPipelines(CRenderingPipelines* );
	void CRenderingPipelines(class CRenderingPipelines *, class CRenderingPipelines &); /* linkage=_ZN19CRenderingPipelinesC4EOS_ */
	void CRenderingPipelines(class CRenderingPipelines *, const class CRenderingPipelines  &); /* linkage=_ZN19CRenderingPipelinesC4ERKS_ */
	void CRenderingPipelines(class CRenderingPipelines *); /* linkage=_ZN19CRenderingPipelinesC4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CRenderingPipelines *); /* linkage=_ZN19CRenderingPipelines15GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CRenderingPipelines *); /* linkage=_ZN19CRenderingPipelines4InitEv */
	virtual void Shutdown(class CRenderingPipelines *); /* linkage=_ZN19CRenderingPipelines8ShutdownEv */
	void ~CRenderingPipelines(class CRenderingPipelines *); /* linkage=_ZN19CRenderingPipelinesD4Ev */
};

// <02878B73> renderingpipelines/renderingpipelines.cpp:42
void* __CreateCRenderingPipelinesIAppSystem_interface(void)
{
} /* size: 12 */

// <02878B45> renderingpipelines/renderingpipelines.cpp:55
void CRenderingPipelines::GetDependencies()
{
} /* size: 12 */

// <02877EEE> renderingpipelines/renderingpipelines.cpp:64
// variables: 14
// function calls: 43
void CRenderingPipelines::Init()
{
	InitReturnVal_t nRetVal; // 66
	{
		KeyValues* pKeyValues; // 76
		KeyValues* pPipelineAliasKeys; // 77
		const char* pVersion; // 102
		const char* pNum; // 103
		{
			KeyValues* pValue; // 80
			{
				const char* pPipelineName; // 83
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > pipelineFallbacks; // 85
				int nCount; // 87
				{
					int i; // 88
					{
						IRenderingPipeline* pPipeline; // 90
						CUtlStringToken::CUtlStringToken(); // 121
						{
						}
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 119
						MakeStringToken(const char* pString,
								bool bWriteToDatabase);  // 90
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
								int i);  // 90
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 90
						CUtlMemory<IRenderingPipeline::NumAllocated(); // 1196
						CUtlMemory<IRenderingPipeline::Base(); // 112
						CUtlVectorBase<IRenderingPipeline::Base(); // 368
						CUtlVectorBase<IRenderingPipeline::ResetDbgInfo(); // 824
						CUtlMemory<IRenderingPipeline::IsGrowable(); // 823
						CUtlMemory<IRenderingPipeline::IsExternallyAllocated(); // 859
						CUtlMemory<IRenderingPipeline::IsExternallyAllocated(); // 861
						CUtlMemory<IRenderingPipeline::Grow(
							int num);  // 806
						CUtlVectorBase<IRenderingPipeline::GrowMemory(
								int num);  // 1198
						CUtlMemory<IRenderingPipeline::operator[](
								int i);  // 602
						CUtlVectorBase<IRenderingPipeline::Element(
							int i);  // 1201
						CopyConstruct<IRenderingPipeline*>(IRenderingPipeline** pMemory,
											IRenderingPipeline* const& src);  // 1201
						CUtlVectorBase<IRenderingPipeline::AddToTail(
								IRenderingPipeline* const& src);  // 93
					}
				}
				CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlString, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 85
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 87
				{
					int i; // 1721
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
						int i);  // 1723
					CUtlString::~CUtlString(); // 1526
					Destruct<CUtlString>(CUtlString* pMemory); // 1723
				}
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
				CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CUtlString, int>::Purge(); // 903
				CUtlMemory<CUtlString, int>::Purge(); // 1799
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
				ValidateAlignment<CUtlString>(void); // 508
				CUtlMemory<CUtlString, int>::Purge(); // 510
				CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 97
			}
		}
		{
			int nBaseLevel; // 106
		}
	}
	CTier0AppSystem<IAppSystem, 0>::Init(); // 71
	CTier2AppSystem<IAppSystem, 0>::Init(); // 66
	{
		CBaseRenderingPipelineFactory* pFactory; // 398
	}
	InitAllFactories(void); // 70
} /* size: 0, variables: 1, inline expansions: 3 (107 bytes) */

// <02877C48> renderingpipelines/renderingpipelines.cpp:125
// variables: 2
// function calls: 12
void CRenderingPipelines::Shutdown()
{
	{
		int i; // 127
		CUtlVectorBase<IRenderingPipeline::Count(); // 127
		CUtlMemory<IRenderingPipeline::operator[](
				int i);  // 588
		CUtlVectorBase<IRenderingPipeline::operator[](
				int i);  // 129
	}
	CUtlVectorBase<IRenderingPipeline::RemoveAll(); // 1798
	CUtlMemory<IRenderingPipeline::IsExternallyAllocated(); // 905
	CUtlMemory<IRenderingPipeline::Purge(); // 903
	CUtlMemory<IRenderingPipeline::Purge(); // 1799
	CUtlVectorBase<IRenderingPipeline::ResetDbgInfo(); // 1800
	CUtlVectorBase<IRenderingPipeline::Purge(); // 131
	{
		CBaseRenderingPipelineFactory* pFactory; // 406
	}
	ShutdownAllFactories(void); // 133
	CTier0AppSystem<IAppSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IAppSystem, 0>::Shutdown(); // 134
} /* size: 219, inline expansions: 9 (248 bytes) */

