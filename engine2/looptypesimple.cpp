
//
// engine2/looptypesimple.cpp
//
//	referenced by: libengine2.so
//
//	functions: 23
//	class: 1
//

// <00379C65> engine2/looptypesimple.cpp:31
void CSboxRenderTargetFlusher::RegisterListener()
{
} /* size: 0 */

// <00379CA8> engine2/looptypesimple.cpp:36
void CSboxRenderTargetFlusher::UnregisterListener()
{
} /* size: 0 */

// <003675F0> engine2/looptypesimple.cpp:41
void CSboxRenderTargetFlusher::OnDeviceLost()
{
} /* size: 5 */

// <003675D8> engine2/looptypesimple.cpp:42
void CSboxRenderTargetFlusher::OnDeviceCreated()
{
} /* size: 0 */

// <0036759B> engine2/looptypesimple.cpp:43
void CSboxRenderTargetFlusher::OnModeChanged(const RenderDeviceInfo_t& mode)
{
} /* size: 5 */

// <00367549> engine2/looptypesimple.cpp:45
void CSboxRenderTargetFlusher::OnDeviceRestored()
{
} /* size: 54 */

// <0035B9BC> engine2/looptypesimple.cpp:69
// function calls: 10
void CLoopTypeSimpleService::~CLoopTypeSimpleService()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IEngineService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IEngineService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IEngineService>::~CBaseEngineService(); // 69
} /* size: 49, inline expansions: 10 (286 bytes) */

// <0035B675> engine2/looptypesimple.cpp:69
// function calls: 18
void CLoopTypeSimpleService::~CLoopTypeSimpleService()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	IEngineService::~IEngineService(); // 120
	CBaseAppSystem<IEngineService>::~CBaseAppSystem(); // 171
	CTier0AppSystem<IEngineService, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<IEngineService, 0>::~CTier1AppSystem(); // 42
	CTier2AppSystem<IEngineService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IEngineService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<IEngineService>::~CBaseEngineService(); // 69
	CLoopTypeSimpleService::~CLoopTypeSimpleService(); // 69
} /* size: 93, inline expansions: 18 (330 bytes) */

// <0035B659> engine2/looptypesimple.cpp:69
inline void CLoopTypeSimpleService::~CLoopTypeSimpleService()
{
} /* size: 0 */

// <0034EF1F> engine2/looptypesimple.cpp:69
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 72
class CLoopTypeSimpleService : public CBaseEngineService<IEngineService> {
public:
	/* class CBaseEngineService<IEngineService> <ancestor>; */ /* 0 64 */
	void CLoopTypeSimpleService(CLoopTypeSimpleService* , CLoopTypeSimpleService& );
	void CLoopTypeSimpleService(CLoopTypeSimpleService* , const CLoopTypeSimpleService& );
	/* engine2/looptypesimple.cpp:75 */
	void CLoopTypeSimpleService(CLoopTypeSimpleService* );
	/* engine2/looptypesimple.cpp:81 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CLoopTypeSimpleService* );
	/* engine2/looptypesimple.cpp:106 */
	virtual void OnLoopActivate(CLoopTypeSimpleService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/looptypesimple.cpp:112 */
	virtual void OnLoopDeactivate(CLoopTypeSimpleService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/looptypesimple.cpp:118 */
	void SetLoopMode(CLoopTypeSimpleService* , ILoopMode* );
private:
	ILoopMode * m_pLoopMode; /* 64 8 */
	virtual void ~CLoopTypeSimpleService(CLoopTypeSimpleService* );
	void CLoopTypeSimpleService(class CLoopTypeSimpleService *, class CLoopTypeSimpleService &); /* linkage=_ZN22CLoopTypeSimpleServiceC4EOS_ */
	void CLoopTypeSimpleService(class CLoopTypeSimpleService *, const class CLoopTypeSimpleService  &); /* linkage=_ZN22CLoopTypeSimpleServiceC4ERKS_ */
	void CLoopTypeSimpleService(class CLoopTypeSimpleService *); /* linkage=_ZN22CLoopTypeSimpleServiceC4Ev */
	virtual const class EngineServiceDependencies_t  * GetServiceDependencies(class CLoopTypeSimpleService *); /* linkage=_ZN22CLoopTypeSimpleService22GetServiceDependenciesEv */
	virtual void OnLoopActivate(class CLoopTypeSimpleService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN22CLoopTypeSimpleService14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class CLoopTypeSimpleService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN22CLoopTypeSimpleService16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	void SetLoopMode(class CLoopTypeSimpleService *, class ILoopMode *); /* linkage=_ZN22CLoopTypeSimpleService11SetLoopModeEP9ILoopMode */
	virtual void ~CLoopTypeSimpleService(class CLoopTypeSimpleService *); /* linkage=_ZN22CLoopTypeSimpleServiceD4Ev */
};

// <00367532> engine2/looptypesimple.cpp:75
void CLoopTypeSimpleService::CLoopTypeSimpleService()
{
} /* size: 0 */

// <00367519> engine2/looptypesimple.cpp:75
inline void CLoopTypeSimpleService::CLoopTypeSimpleService()
{
} /* size: 0 */

// <0036740A> engine2/looptypesimple.cpp:81
// variables: 2
// function calls: 2
void CLoopTypeSimpleService::GetServiceDependencies()
{
	{
		EngineServiceDependencies_t s_Dependencies; // 85
	}
	{
		EngineServiceDependencies_t s_Dependencies; // 96
	}
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 83
} /* size: 86, inline expansions: 2 (22 bytes) */

// <0036735B> engine2/looptypesimple.cpp:106
void CLoopTypeSimpleService::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 153 */

// <003672B5> engine2/looptypesimple.cpp:112
void CLoopTypeSimpleService::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 139 */

// <00367290> engine2/looptypesimple.cpp:118
inline void CLoopTypeSimpleService::SetLoopMode(ILoopMode* pLoopMode)
{
} /* size: 0 */

// <0036726F> engine2/looptypesimple.cpp:133
void* __CreateCLoopTypeSimpleServiceIEngineService_interface(void)
{
} /* size: 12 */

// <00367046> engine2/looptypesimple.cpp:139
// function calls: 3
void CLoopTypeSimple::Init(const char* pLoopName, ILoopModeFactory* pFactory, void** ppGlobalPointer)
{
	CAppSystemDict::IsConsoleApp(); // 130
	CTier1Application::IsConsoleApp(); // 155
	CSboxRenderTargetFlusher::RegisterListener(); // 165
} /* size: 287, inline expansions: 3 (48 bytes) */

// <00366F78> engine2/looptypesimple.cpp:170
// variables: 2
// function call: 1
void CLoopTypeSimple::Shutdown()
{
	const char   __FUNCTION__; // 63406
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 174
	}
	CSboxRenderTargetFlusher::UnregisterListener(); // 172
} /* size: 0, variables: 1, inline expansions: 1 (26 bytes) */

// <00366EA3> engine2/looptypesimple.cpp:183
// variables: 2
void CLoopTypeSimple::AllocateLoopMode(uint32 unRequestId, KeyValues* pInitInfo, ILoopModePrerequisiteRegistry* pRegistry)
{
	const char   __FUNCTION__; // 63612
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
	}
} /* size: 0, variables: 1 */

// <00366E28> engine2/looptypesimple.cpp:194
// variables: 2
void CLoopTypeSimple::DeallocateLoopMode()
{
	const char   __FUNCTION__; // 63661
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
} /* size: 0, variables: 1 */

// <00366D0D> engine2/looptypesimple.cpp:211
// variables: 2
// function call: 1
void CLoopTypeSimple::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
	const char   __FUNCTION__; // 63558
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
	CLoopTypeSimpleService::SetLoopMode(
			ILoopMode* pLoopMode);  // 214
} /* size: 0, variables: 1, inline expansions: 1 (14 bytes) */

// <00366C18> engine2/looptypesimple.cpp:218
// variables: 2
// function call: 1
void CLoopTypeSimple::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
	const char   __FUNCTION__; // 63612
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 220
	}
	CLoopTypeSimpleService::SetLoopMode(
			ILoopMode* pLoopMode);  // 222
} /* size: 0, variables: 1, inline expansions: 1 (11 bytes) */

// <00362C73> engine2/looptypesimple.cpp:228
// variables: 23
// function calls: 254
void CLoopTypeSimple::Update(const EngineLoopState_t& state, float64 flRealTime, float64 flPreviousTime)
{
	CEventDispatcher<CEventIDManager_Default>* pEventDispatcher; // 234
	CEventRegistry registry; // 240
	float64 dt; // 242
	double flStartTime; // 244
	double clientOutputStart; // 245
	{
		Scope s; // 250
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
		AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<int, 4, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<int, 4>::CUtlVectorFixedGrowable(
					int growSize);  // 79
		DelegateIterator_Base_t::DelegateIterator_Base_t(); // 106
		DelegateIterator_t::DelegateIterator_t(); // 773
		GetDefaultReturnValue(void); // 155
		CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::CEventDispatcher_WrappedReturnType(); // 772
		{
			CUtlDelegate<void()> delegate; // 776
			CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
			ClosurePtr<void (detail::GenericClass::::ClosurePtr()(), void (*)(), void (*)()>* this); // 957
			FastDelegate0<void>::Clear(); // 957
			FastDelegate0<void>::FastDelegate0(); // 2120
			CUtlDelegate<void()>::CUtlDelegate()>* this); // 776
			{
				const EventListenerInfo_t* pListener; // 777
				CUtlAbstractDelegate::SetMementoFrom(
						const CUtlAbstractDelegate& right);  // 843
				ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate0<void> >(
								FastDelegate0<void>* pParent,
								const CUtlAbstractDelegate& right);  // 1058
				FastDelegate0<void>::SetAbstractDelegate(
							const CUtlAbstractDelegate& any);  // 779
				FastDelegate0<void>::operator()(const FastDelegate0<void>* this); // 784
				FastDelegate1<const EventClientOutput_t&, void>::operator(
						const EventClientOutput_t& p1);  // 785
				{
					bool bContinue; // 791
					FastDelegate0<bool>::operator()(const FastDelegate0<bool>* this); // 794
					MergeReturnValueAndContinueIterating(ReturnType_t& dest,
										const ReturnType_t& other);  // 164
					CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::MergeReturnValueAndContinueIterating(
										const ReturnType_t& other);  // 794
					FastDelegate1<const EventClientOutput_t&, bool>::operator(
							const EventClientOutput_t& p1);  // 795
					MergeReturnValueAndContinueIterating(ReturnType_t& dest,
										const ReturnType_t& other);  // 164
					CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientOutput_t>, bool>::MergeReturnValueAndContinueIterating(
										const ReturnType_t& other);  // 795
					{
					}
				}
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 1263
			CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(
						DelegateIterator_t& iterationStruct);  // 806
		}
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::RemoveAll(); // 1798
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
		AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<int, 4, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<int, 4, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<int, 4>::~CUtlVectorFixedGrowable(); // 79
		DelegateIterator_Base_t::~DelegateIterator_Base_t(); // 106
		DelegateIterator_t::~DelegateIterator_t(); // 809
		{
			CUtlDelegate<void()> delegate; // 776
			{
				const EventListenerInfo_t* pListener; // 777
				{
				}
			}
		}
		CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>::DispatchEvent(
				Param1Type_t param1,
				bool bIterateForward,
				EventID_t EventID);  // 768
		CEvent_Dispatch<CEventIDManager_Default, EventClientOutput_t, 1>::DispatchEvent(
				Param1Type_t param1,
				bool bIterateForward,
				EventID_t EventID);  // 132
		GetPrimaryBinding(void); // 69
		Schema_StaticBinding(void); // 128
		CSchemaClassInfo::GetBindingName(); // 128
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 128
		CRelativeTickCount::Init(); // 547
		CRelativeTickCount::CRelativeTickCount(); // 613
		CRelativeTickTimer::CRelativeTickTimer(); // 130
		CRelativeTickCount::Sample(); // 618
		CRelativeTickTimer::Start(); // 131
		GetPrimaryBinding(void); // 69
		Schema_StaticBinding(void); // 237
		GetEventID(void); // 132
		CRelativeTickTimer::End(); // 133
		Scope::~Scope(); // 138
		CRelativeTickCount::GetMillisecondsF(); // 136
		GetPrimaryBinding(void); // 69
		Schema_StaticBinding(void); // 136
		CSchemaClassInfo::GetBindingName(); // 136
		CLoopTypeBase::DispatchEvent<EventClientOutput_t>(
							CEventDispatcher<CEventIDManager_Default>* pEventDispatcher,
							const EventClientOutput_t& msg,
							CEventRegistry& registry);  // 251
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 250
		EventClientOutput_t::EventClientOutput_t(
					const EngineLoopState_t& state,
					float flRenderTime,
					float flRealTime,
					float flFrameTimeUnbounded,
					bool bRenderOnly);  // 251
		EventClientPostOutput_t::EventClientPostOutput_t(
					const EngineLoopState_t& state,
					float64 flRenderTime,
					float flFrameTime,
					float flFrameTimeUnbounded,
					bool bRenderOnly);  // 252
		GetPrimaryBinding(void); // 88
		Schema_StaticBinding(void); // 128
		CSchemaClassInfo::GetBindingName(); // 128
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 128
		CRelativeTickCount::Init(); // 547
		CRelativeTickCount::CRelativeTickCount(); // 613
		CRelativeTickTimer::CRelativeTickTimer(); // 130
		CRelativeTickCount::Sample(); // 618
		CRelativeTickTimer::Start(); // 131
		GetPrimaryBinding(void); // 88
		Schema_StaticBinding(void); // 237
		GetEventID(void); // 132
		GetDefaultReturnValue(void); // 155
		CEventDispatcher_WrappedReturnType(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool> this); // 772
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
		AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<int, 4, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<int, 4>::CUtlVectorFixedGrowable(
					int growSize);  // 79
		DelegateIterator_Base_t::DelegateIterator_Base_t(); // 106
		DelegateIterator_t::DelegateIterator_t(); // 773
		{
			CUtlDelegate<void()> delegate; // 776
			{
				const EventListenerInfo_t* pListener; // 777
				FastDelegate0<void>::operator()(const FastDelegate0<void>* this); // 784
				FastDelegate1<const EventClientPostOutput_t&, void>::operator(
						const EventClientPostOutput_t& p1);  // 785
				{
					bool bContinue; // 791
					FastDelegate0<bool>::operator()(const FastDelegate0<bool>* this); // 794
					MergeReturnValueAndContinueIterating(ReturnType_t& dest,
										const ReturnType_t& other);  // 164
					MergeReturnValueAndContinueIterating(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool>  this,
										const ReturnType_t& other);  // 794
					FastDelegate1<const EventClientPostOutput_t&, bool>::operator(
							const EventClientPostOutput_t& p1);  // 795
					MergeReturnValueAndContinueIterating(ReturnType_t& dest,
										const ReturnType_t& other);  // 164
					MergeReturnValueAndContinueIterating(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventClientPostOutput_t>, bool>  this,
										const ReturnType_t& other);  // 795
					{
					}
				}
				CUtlAbstractDelegate::SetMementoFrom(
						const CUtlAbstractDelegate& right);  // 843
				ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate0<void> >(
								FastDelegate0<void>* pParent,
								const CUtlAbstractDelegate& right);  // 1058
				FastDelegate0<void>::SetAbstractDelegate(
							const CUtlAbstractDelegate& any);  // 779
			}
			CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
			ClosurePtr<void (detail::GenericClass::::ClosurePtr()(), void (*)(), void (*)()>* this); // 957
			FastDelegate0<void>::Clear(); // 957
			FastDelegate0<void>::FastDelegate0(); // 2120
			CUtlDelegate<void()>::CUtlDelegate()>* this); // 776
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 1263
			CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(
						DelegateIterator_t& iterationStruct);  // 806
		}
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::RemoveAll(); // 1798
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
		AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<int, 4, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<int, 4, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<int, 4>::~CUtlVectorFixedGrowable(); // 79
		DelegateIterator_Base_t::~DelegateIterator_Base_t(); // 106
		DelegateIterator_t::~DelegateIterator_t(); // 809
		{
			CUtlDelegate<void()> delegate; // 776
			{
				const EventListenerInfo_t* pListener; // 777
				{
				}
			}
		}
		CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>::DispatchEvent(
				Param1Type_t param1,
				bool bIterateForward,
				EventID_t EventID);  // 768
		CEvent_Dispatch<CEventIDManager_Default, EventClientPostOutput_t, 1>::DispatchEvent(
				Param1Type_t param1,
				bool bIterateForward,
				EventID_t EventID);  // 132
		CRelativeTickTimer::End(); // 133
		Scope::~Scope(); // 138
		CRelativeTickCount::GetMillisecondsF(); // 136
		GetPrimaryBinding(void); // 88
		Schema_StaticBinding(void); // 136
		CSchemaClassInfo::GetBindingName(); // 136
		CLoopTypeBase::DispatchEvent<EventClientPostOutput_t>(
							CEventDispatcher<CEventIDManager_Default>* pEventDispatcher,
							const EventClientPostOutput_t& msg,
							CEventRegistry& registry);  // 252
		Scope::~Scope(); // 253
	}
	{
		Scope s; // 262
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 262
		Scope::~Scope(); // 264
	}
	{
		Scope s; // 268
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 268
		Scope::~Scope(); // 270
	}
	{
		Scope s; // 275
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 275
		Scope::~Scope(); // 277
	}
	{
		Scope s; // 280
		const int  MAX_RESOURCE_SYSTEM_UPDATE_TIME_NS; // 281
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 280
		Scope::~Scope(); // 283
	}
	{
		Scope s; // 287
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 287
		Scope::~Scope(); // 289
	}
	{
		Scope s; // 292
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 292
		Scope::~Scope(); // 294
	}
	{
		Scope s; // 298
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 298
		Scope::~Scope(); // 300
	}
	CEventRegistry::CEventRegistry(
			CLoopTypeBase* pLoop);  // 240
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 248
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 273
	GetPrimaryBinding(void); // 50
	Schema_StaticBinding(void); // 128
	CSchemaClassInfo::GetBindingName(); // 128
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 128
	CRelativeTickCount::Init(); // 547
	CRelativeTickCount::CRelativeTickCount(); // 613
	CRelativeTickTimer::CRelativeTickTimer(); // 130
	CRelativeTickCount::Sample(); // 618
	CRelativeTickTimer::Start(); // 131
	GetPrimaryBinding(void); // 50
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 132
	GetDefaultReturnValue(void); // 155
	CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::CEventDispatcher_WrappedReturnType(); // 772
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
	AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 79
	DelegateIterator_Base_t::DelegateIterator_Base_t(); // 106
	DelegateIterator_t::DelegateIterator_t(); // 773
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			FastDelegate0<void>::operator()(const FastDelegate0<void>* this); // 784
			FastDelegate1<const EventFrameBoundary_t&, void>::operator(
					const EventFrameBoundary_t& p1);  // 785
			{
				bool bContinue; // 791
				FastDelegate0<bool>::operator()(const FastDelegate0<bool>* this); // 794
				MergeReturnValueAndContinueIterating(ReturnType_t& dest,
									const ReturnType_t& other);  // 164
				CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::MergeReturnValueAndContinueIterating(
									const ReturnType_t& other);  // 794
				FastDelegate1<const EventFrameBoundary_t&, bool>::operator(
						const EventFrameBoundary_t& p1);  // 795
				MergeReturnValueAndContinueIterating(ReturnType_t& dest,
									const ReturnType_t& other);  // 164
				CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventFrameBoundary_t>, bool>::MergeReturnValueAndContinueIterating(
									const ReturnType_t& other);  // 795
				{
				}
			}
			CUtlAbstractDelegate::SetMementoFrom(
					const CUtlAbstractDelegate& right);  // 843
			ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate0<void> >(
							FastDelegate0<void>* pParent,
							const CUtlAbstractDelegate& right);  // 1058
			FastDelegate0<void>::SetAbstractDelegate(
						const CUtlAbstractDelegate& any);  // 779
		}
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(), void (*)(), void (*)()>* this); // 957
		FastDelegate0<void>::Clear(); // 957
		FastDelegate0<void>::FastDelegate0(); // 2120
		CUtlDelegate<void()>::CUtlDelegate()>* this); // 776
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1263
		CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(
					DelegateIterator_t& iterationStruct);  // 806
	}
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::RemoveAll(); // 1798
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
	AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<int, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 4>::~CUtlVectorFixedGrowable(); // 79
	DelegateIterator_Base_t::~DelegateIterator_Base_t(); // 106
	DelegateIterator_t::~DelegateIterator_t(); // 809
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
			}
		}
	}
	CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>::DispatchEvent(
			Param1Type_t param1,
			bool bIterateForward,
			EventID_t EventID);  // 768
	CEvent_Dispatch<CEventIDManager_Default, EventFrameBoundary_t, 1>::DispatchEvent(
			Param1Type_t param1,
			bool bIterateForward,
			EventID_t EventID);  // 132
	CRelativeTickTimer::End(); // 133
	Scope::~Scope(); // 138
	CRelativeTickCount::GetMillisecondsF(); // 136
	GetPrimaryBinding(void); // 50
	Schema_StaticBinding(void); // 136
	CSchemaClassInfo::GetBindingName(); // 136
	CLoopTypeBase::DispatchEvent<EventFrameBoundary_t>(
						CEventDispatcher<CEventIDManager_Default>* pEventDispatcher,
						const EventFrameBoundary_t& msg,
						CEventRegistry& registry);  // 302
} /* size: 0, variables: 5, inline expansions: 61 (2215 bytes) */

